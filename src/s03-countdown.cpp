#include <iostream>
#include <string>

int main(int, char *argv[]) {
  auto x = int{};
  x = std::stoi(argv[1]);
  int i;
  for (i = x; i >= 0; i = i - 1)
    std::cout << i << ". . ." << std::endl;
}
