#include <iostream>
#include <string>

auto main(int argc, char *argv[]) -> int {
  auto x = std::string(argv[1]);
  int i;
  for (i = argc; i >= 2; i--) {
    std::cout << x;
  }
}
