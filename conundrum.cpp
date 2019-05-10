#include <iostream>
#include <string>

int main() {
    std::string str; 
    std::cin >> str;
    int count = 0;
    for (int i = 0; i < str.length(); i++) {
        if (i % 3 == 0) {
            if (str[i] == 'P') {
                continue;
            } else {
                count++;
            }
        } else if (i % 3 == 1) {
            if (str[i] == 'E') {
                continue;
            } else {
                count++;
            }
        } else {
            if (str[i] == 'R') {
                continue;
            } else {
                count++;
            }
        }
    }
    std::cout << count << std::endl;
    return 0;
}
