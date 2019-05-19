#include <iostream>
#include <string>

int main() {
    std::string s1, s2;     
    getline(std::cin, s1);
    getline(std::cin, s2);
    if (s1.length() >= s2.length()) {
        std::cout << "go" << std::endl;
    } else {
        std::cout << "no" << std::endl;
    }
    return 0;
}
