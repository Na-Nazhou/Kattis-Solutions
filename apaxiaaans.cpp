#include <iostream>
#include <string>

int main() {
    std::string str; 
    std::cin >> str;
    char prev = str[0];
    std::cout << prev;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == prev) {
            continue;
        } else {
            std::cout << str[i];
            prev = str[i];
        }
    }
    std::cout << std::endl;
    return 0;
}
