// Notes: cctype (islower, isupper)

#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>

int main() {
    std::string str; 
    std::cin >> str;
    
    int n = str.length();
    int whitespace = 0, lower = 0, upper = 0, symbol = 0;
    for (char ch : str) {
        if (ch == '_') {
            whitespace++;
        } else if (std::islower(ch)) {
            lower++;
        } else if (std::isupper(ch)) {
            upper++;
        } else {
            symbol++;
        }
    }
    std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(10) 
        << (double)whitespace / n << "\n"
        << (double)lower / n << "\n" 
        << (double)upper / n << "\n" 
        << (double)symbol / n 
        << std::endl;
    
    return 0;
}
