#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n;
    while (n > 0) {
        std::string first, second;
        std::cin >> first >> second;
        std::cout << first << "\n" << second << std::endl;
        for (int i = 0;i < first.length(); i++) {
            if (first[i] == second[i]) {
                std::cout << ".";
            } else {
                std::cout << "*";
            }
        }
        std::cout << "\n" << std::endl;
        n--;
    }
    return 0;
}
