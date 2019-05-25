#include <iostream>
#include <string>
#include <algorithm>

std::string pad(std::string str, int n) {
    std::string result = str;
    for (int i = 0; i < n; i++) {
        result = "0" + result;
    }
    return result;
}

int main() {
    std::string first;
    while (std::cin >> first) {     
        std::string second;
        std::cin >> second;
        if (first.size() < second.size() || 
                (first.size() == second.size() 
                    && first < second)) {
            std::string temp = first;
            first = second;
            second = temp;
        }
        second = pad(second, first.size() - second.size());
        std::string result;
        int carry = 0;
        for (int i = first.size() - 1; i >= 0; i--) {
            int a = (int)(first[i] - '0');
            int b = (int)(second[i] - '0');
            int x = a - b - carry;
            if (x < 0) {
                x = 10 + a - b - carry;
                carry = 1;
            } else {
                carry = 0;
            }
            result = std::to_string(x) + result;
        }
        bool first = true;
        for (auto i = 0; i < result.size(); i++) {
            char digit = result[i];
            if (digit != '0' || !first || i == result.size() - 1) { 
                std::cout << digit;
                if (first) {
                    first = false;
                }
            }
        }
        std::cout << std::endl;
    }
    return 0;
}
