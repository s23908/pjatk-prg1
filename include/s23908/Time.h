#ifndef s23908_TIME_H
#define s23908_TIME_H

#include <iostream>
#include <sstream>
#include <string>

namespace s23908 {
struct Time {
  int hour;
  int minute;
  int second;

  auto to_string() const -> std::string;
  auto next_hour();
  auto next_minute();
  auto next_second();
  Time(int, int, int);
};
} // namespace s23908
#endif
