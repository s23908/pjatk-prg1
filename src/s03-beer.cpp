#include <algorithm>
#include <iostream>
#include <iterator>
#include <string>

auto main(int argc, char *argv[]) -> int

{
  int x;
  if (argc == 1) {
    for (x = 99; x >= 1; x--) {
      std::cout << x << "bottles of beer on the wall," << x
                << "bottless of beer.\n"
                << "take one down, pass it around," << x - 1
                << "bottles of beer on the wall...";
    }
  } else
    for (x = std::stoi(argv[1]); x >= 1; x--) {
      std::cout << x << "bottles of beer on the wall," << x
                << "bottless of beer.\n"
                << "take one down, pass it around," << x - 1
                << "bottles of beer on the wall...";
    }
  if (x == 0) {
    return 0;
  }
}
