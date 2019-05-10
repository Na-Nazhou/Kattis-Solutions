#include <iostream>

int main() {
    char ch;
    bool prev = false;
    bool hiss = false;
    while (std::cin >> ch) {
        if (ch == 's' && prev) {
            hiss = true;
            break;
        } else if (prev) {
            prev = false;
        } else if (ch == 's') {
            prev = true;
        }
    }
    std::cout << (hiss ? "hiss" : "no hiss") << std::endl;
    return 0;
}
