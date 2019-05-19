#include <iostream>

//TODO
int main() {
    int n; 
    std::cin >> n;
    int a = 0, b = 0, c = 0;
    for (int i = 0; i < n; i++) {
        char ch;
        std::cin >> ch;
        switch (ch) {
            case 'A':
                if (i % 3 == 0) {
                    a++;
                } 
                if (i % 4 == 1) {
                    b++;
                } 
                if (i % 6 == 2 || i % 6 == 3) {
                    c++;
                }
                break;
            case 'B':
                if (i % 3 == 1) {
                    a++;
                } 
                if (i % 2 == 0) {
                    b++;
                }
                if (i % 6 >= 4) {
                    c++;
                }
                break;
            case 'C':
                if (i % 3 == 2) {
                    a++;
                }
                if (i % 4 == 3) {
                    b++;
                }
                if (i % 6 <= 1) {
                    c++;
                }
                break;
        }
    }

    int max = a;
    if (b > max) {
        max = b;
    } 
    if (c > max) {
        max = c;
    }
    std::cout << max << std::endl;
    if (max == a) {
        std::cout << "Adrian" << std::endl;
    } 
    if (max == b) {
        std::cout << "Bruno" << std::endl;
    } 
    if (max == a) {
        std::cout << "Goran" << std::endl;
    } 
    return 0;
}
