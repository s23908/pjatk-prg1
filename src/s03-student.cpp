#include <iostream>
#include <s23908/Student.h>
#include <string>

s23908::Student::Student(std::string name, std::string surname,
                         std::string index_number,
                         unsigned int current_semester, double average_grade)
    : name{name}, surname{surname}, index_number{index_number},
      current_semester{current_semester}, average_grade{average_grade} {}

auto s23908::Student::to_string() const -> std::string {
  std::cout << "name:" << name << std::endl
            << "surname:" << surname << std::endl
            << "index_number:" << index_number << std::endl
            << "current_semster:" << current_semester << std::endl
            << "average grade:" << average_grade << std::endl;
  return 0;
}

auto main() -> int {
  auto const ja = s23908::Student{"Błażej", "Karczewski", "s23908", 1, 6.0};

  std::cout << ja.to_string();
}
