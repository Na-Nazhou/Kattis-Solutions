#include <iostream>
#include <string>

int main() {
    std::string str; 
    std::cin >> str;
    int count = 0;
    for (int i = 0; i < str.length(); i++) {
        if (i % 3 == 0 && str[i] != 'P') {
            count++;
        } else if (i % 3 == 1 && str[i] != 'E') {
            count++;
        } else if (i % 3 == 2 && str[i] != 'R') {
            count++;
        }
    }
    std::cout << count << std::endl;
    return 0;
}
