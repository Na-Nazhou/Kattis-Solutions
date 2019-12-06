#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;
    int curr = 1;
    for (char ch : s) {
        switch(ch) {
            case 'A':
                if (curr == 1) {
                    curr = 2;
                } else if (curr == 2) {
                    curr = 1;
                }
                break;
            case 'B': 
                if (curr == 2) {
                    curr = 3;
                } else if (curr == 3) {
                    curr = 2;
                }
                break;
            case 'C':
                if (curr == 1) {
                    curr = 3;
                } else if (curr == 3) {
                    curr = 1;
                }
                break;
            default:
                std::cerr << "Incorrect input" << std::endl;
        }
    }
    std::cout << curr << std::endl;
    return 0;
}
