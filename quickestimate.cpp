#include <iostream>
#include <string>

int main() {
    int n; 
    std::cin >> n;
    while (n--) {
        std::string str;
        std::cin >> str;
        std::cout << str.size() << std::endl;
    }
    return 0;
}
