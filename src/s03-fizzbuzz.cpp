#include <iostream>
#include <string>

int main(int, char *argv[]) {
  auto x = int{};
  x = std::stoi(argv[1]);
  int i;
  for (i = 1; i <= x; i++) {
    std::cout << i << std::endl;
    if (i % 3 == 0) {
      std::cout << "fizz " << std::endl;
    }
    if (i % 5 == 0) {
      std::cout << "buzz" << std::endl;
    }
    if (i % 3 == 0 && i % 5 == 0) {
      std::cout << "FizzBuzz" << std::endl;
    }
  }
}
