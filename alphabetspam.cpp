#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>

int main() {
    std::string str; 
    std::cin >> str;
    double n = str.length();
    double whitespace = 0, lower = 0, upper = 0, symbol = 0;
    for (int i = 0; i < n; i++) {
        char ch = str[i];
        if (ch == '_') {
            whitespace = whitespace + 1;
        } else if (std::islower(ch)) {
            lower = lower + 1;
        } else if (std::isupper(ch)) {
            upper = upper + 1;
        } else {
            symbol = symbol + 1;
        }
    }
    std::cout << std::setiosflags(std::ios::fixed) <<
        std::setprecision(10) << whitespace / n << "\n"
        << lower / n << "\n" << upper / n << "\n" 
        << symbol / n << std::endl;
    return 0;
}
