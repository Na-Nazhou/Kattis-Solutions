#include <iostream>

int main() {
  double miles;
  std::cin >> miles;
  int paces = (int)(miles * 1000 * 5280 / 4854 + 0.5);
  std::cout << paces << std::endl;
  return 0;
}