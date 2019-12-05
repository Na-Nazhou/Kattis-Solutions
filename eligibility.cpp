#include <iostream>
#include <string>

void print(std::string name, std::string status) {
  std::cout << name << " " << status << std::endl;
}

int main() {
  int n;
  std::cin >> n;
  for (int i = 0; i < n; i++) {
    std::string name;
    std::cin >> name;
    std::string str;
    std::cin >> str;
    int year, birth, courses;
    year = std::stoi(str.substr(0, 4));
    if (year >= 2010) {
      print(name, "eligible");
      std::getline(std::cin, str);
      continue;
    }
    std::cin >> str;
    birth = std::stoi(str.substr(0, 4));
    if (birth >= 1991) {
      print(name, "eligible");
      std::getline(std::cin, str);
      continue;
    }
    std::cin >> courses;
    if (courses <= 40) {
      print(name, "coach petitions");
    } else {
      print(name, "ineligible");
    }
  }
  return 0;
}
