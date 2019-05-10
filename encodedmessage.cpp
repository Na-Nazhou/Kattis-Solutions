#include <iostream>
#include <string>
#include <cmath>

int main() {
    int n; 
    std::cin >> n;
    while (n > 0) {
        std::string str;
        std::cin >> str;
        int len = std::sqrt(str.length());
        for (int i = len - 1; i >= 0; i--) {
            for (int j = 0; j < len; j++) {
                std::cout << str[j * len + i];
            }
        }
        std::cout << std::endl;
        n--;
    }
    return 0;
}
