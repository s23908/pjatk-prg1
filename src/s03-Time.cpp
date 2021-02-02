#include <iomanip>
#include <iostream>
#include <s23908/Time.h>
#include <sstream>
#include <string>

s23908::Time::Time(int hour, int minute, int second)
    : hour{hour}, minute{minute}, second{second} {}
auto s23908::Time::next_hour() {
  ++hour;
  if (hour > 23)
    hour = 0;
}
auto s23908::Time::next_minute() {
  ++minute;
  if (minute > 59)
    minute = 0;
}
auto s23908::Time::next_second() {
  ++second;
  if (second > 59)
    second = 0;
}
auto timefiller(int filler) -> std::string {
  auto out = std::ostringstream{};
  out << std::setfill('0') << std::setw(2) << filler;
  return out.str();
}
auto s23908::Time::to_string() const -> std::string {
  auto out = std::ostringstream{};
  out << timefiller(hour) << ":" << timefiller(minute) << ":"
      << timefiller(second) << "\n";
}

auto main() -> int {
  auto time = s23908::Time{23, 59, 59};
  std::cout << time.to_string() << "\n";
  return 0;
}
