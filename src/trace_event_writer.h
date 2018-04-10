#pragma once

#include <chrono>
#include <fstream>
#include <ostream>
#include <vector>

#include <pthread.h>

// c.f. https://docs.google.com/document/d/1CvAClvFfyA5R-PhYUmn5OOQtYMH4h6I0nSsKchNAySU/edit

// Event definition

struct CompleteEvent
{
  std::string name;
  // cat is not interesting
  // ph is implicitly X
  std::chrono::high_resolution_clock::time_point ts;
  // tts is not interesting
  // pid is not interesting
  pthread_t tid = 0;
  std::vector<std::pair<std::string, std::string>> args;

  std::chrono::high_resolution_clock::duration dur;
};

// JSON output

inline std::ostream& operator<<(std::ostream& os, const CompleteEvent& e)
{
  os << "{"
    "\"name\":\"" << e.name << "\","
    "\"cat\":\"\","
    "\"ph\":\"X\","
    "\"ts\":" << std::chrono::duration_cast<std::chrono::microseconds>(e.ts.time_since_epoch()).count() << ","
    "\"pid\":1,"
    "\"tid\":" << e.tid << ","
    "\"args\":{";
  bool first = true;
  for (const auto& arg: e.args)
  {
    if (first)
    {
      os << "\"" << arg.first << "\":\"" << arg.second << "\"";
      first = false;
    }
    else
    {
      os << ",\"" << arg.first << "\":\"" << arg.second << "\"";
    }
  }
  os << "},"
    "\"dur\":" << std::chrono::duration_cast<std::chrono::microseconds>(e.dur).count() << ""
    "}";

  return os;
};

inline std::ostream& operator<<(std::ostream& os, const std::vector<CompleteEvent>& es)
{
  os << "[";
  bool first = true;
  for (const auto& e: es)
  {
    if (first)
    {
      os << e;
      first = false;
    }
    else
    {
      os << "\n," << e;
    }
  }
  return os << "]";
};

// Tracer

struct Tracer
{
  Tracer(size_t size)
  {
    m_events.reserve(size);
  }

  ~Tracer()
  {
    std::ofstream out("profile.json");
    out << m_events;
  }

  void trace(
    const char* name,
    std::chrono::high_resolution_clock::time_point tStart,
    std::chrono::high_resolution_clock::time_point tEnd,
    std::vector<std::pair<std::string, std::string>> args = {}
  )
  {
    m_events.emplace_back();

    auto& e = m_events.back();
    e.name = name;
    e.ts = tStart;
    e.tid = pthread_self();
    e.args = std::move(args);
    e.dur = (tEnd - tStart);
  }

private:
  std::vector<CompleteEvent> m_events;
};

