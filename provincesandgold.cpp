#include <iostream>

int main() {
  int G, S, C;
  std::cin >> G >> S >> C;
  int sum = 3 * G + 2 * S + C;
  if (sum >= 8) {
    std::cout << "Province or Gold" << std::endl;
  } else if (sum >= 6) {
    std::cout << "Duchy or Gold" << std::endl;
  } else if (sum >= 5) {
    std::cout << "Duchy or Silver" << std::endl;
  } else if (sum >= 3) {
    std::cout << "Estate or Silver" << std::endl;
  } else if (sum >= 2) {
    std::cout << "Estate or Copper" << std::endl;
  } else {
    std::cout << "Copper" << std::endl;
  }
  return 0;
}