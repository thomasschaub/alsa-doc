#include <iostream>

#include "../src/trace_event_writer.h"

int main()
{
  std::vector<CompleteEvent> es;

  es.emplace_back();
  es.back().name = "foo";
  es.back().ts = std::chrono::high_resolution_clock::now();
  es.back().tid = 1;
  es.back().args = {{"a", "b"}};
  es.back().dur = std::chrono::duration_cast<std::chrono::high_resolution_clock::duration>(std::chrono::microseconds(1));

  es.emplace_back();
  es.back().name = "bar";
  es.back().ts = std::chrono::high_resolution_clock::now();
  es.back().tid = 2;
  es.back().args = {{"a", "b"}, {"c", "d"}};
  es.back().dur = std::chrono::duration_cast<std::chrono::high_resolution_clock::duration>(std::chrono::microseconds(2));

  es.emplace_back();
  es.back().name = "baz";
  es.back().ts = std::chrono::high_resolution_clock::now();
  es.back().tid = 1;
  es.back().dur = std::chrono::duration_cast<std::chrono::high_resolution_clock::duration>(std::chrono::microseconds(3));

  std::cout << es;
}
