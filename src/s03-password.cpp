#include <iostream>
#include <string>

int main(int, char *argv[]) {
  const std::string password = {argv[1]};
  auto user_password = std::string{};
  {
    do {
      std::cout << "password: ";
      std::getline(std::cin, user_password);
    } while (password != user_password);
    std::cout << "password: " << user_password << std::endl;
  }
  std::cout << "ok!" << std::endl;
}
