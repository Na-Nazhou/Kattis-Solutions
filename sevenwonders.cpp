#include <iostream>

int main() {
    int T = 0, C = 0, G = 0;
    char ch;
    while (std::cin >> ch) {
        if (ch == 'T') {
            T++;
        } else if (ch == 'C') {
            C++;
        } else {
            G++;
        }
    }
    int min = T;
    if (G < min) {
        min = G;
    }
    if (C < min) {
        min = C;
    }
    std::cout << T * T + G * G + C * C + 7 * min << std::endl;
    return 0;
}
