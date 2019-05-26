#include <iostream>
#include <string>

std::string toBinary(int decimal) {
    std::string result = "";
    for (int i = decimal; i > 0; i = i / 2) {
        result = std::to_string(i % 2) + result;
    }
    return result;
}

int main() {
    int n; 
    std::cin >> n;
    std::string binary = toBinary(n);
    std::string reversed = "";
    for (int i = binary.size() - 1; i >= 0; i--) {
        reversed.push_back(binary[i]);
    }
    long long int reversed_binary = std::stoll(reversed, nullptr, 2);
    std::cout << reversed_binary << std::endl;
    return 0;
}
