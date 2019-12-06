#include <iostream>
#include <string>

int main() {
    std::string str; 
    std::cin >> str;
    
    std::cout << str[0];
    for (int i = 1; i < str.length(); i++) {
        if (str[i] != str[i - 1]) {
            std::cout << str[i];
        } 
    }
    std::cout << std::endl;
    
    return 0;
}
