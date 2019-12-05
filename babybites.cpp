#include <iostream>
#include <string>

int main() {
  int n, c = 1;
  bool ans = true;
  std::cin >> n;
  std::string str;
  while (n--) {
    std::cin >> str;
    if (str == "mumble" || std::stoi(str) == c) {
      c++;
      continue;
    } else {
      ans = false;
      break;
    }
  }
  if (ans) {
    std::cout << "makes sense" << std::endl;
  } else {
    std::cout << "something is fishy" << std::endl;
  }
  return 0;
}