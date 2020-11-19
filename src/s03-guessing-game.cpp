#include <iostream>
#include <random>
#include <string>

int main() {
  std::random_device rd;
  std::uniform_int_distribution<int> d100(1, 100);
  auto const x = d100(rd);
  std::cout << x << std::endl;
  int y;
  while (x != y) {
    std::cout << "guess: ";
    std::cin >> y;
    if (x == y) {
      std::cout << "number is just right" << std::endl;
    } else if (x < y) {
      std::cout << "number too big! " << std::endl;
    } else if (x > y) {
      std::cout << "number too small! " << std::endl;
    }
  }
}
