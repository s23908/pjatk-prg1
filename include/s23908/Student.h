#ifndef S23908_STUDENT_H
#define S23908_STUDENT_H

#include <iostream>
#include <sstream>
#include <string>

namespace s23908 {
struct Student {
  std::string name;
  std::string surname;
  std::string index_number;
  int unsigned current_semester;
  double average_grade;

  Student(std::string, std::string, std::string, unsigned int, double);

  auto to_string() const -> std::string;
};
} // namespace s23908
#endif
