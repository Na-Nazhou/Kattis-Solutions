#include <iostream>

int main() {
    int h, m;
    std::cin >> h >> m;
    if (m >= 45) {
        std::cout << h << " " << m - 45 << std::endl;
    } else if (h > 0) {
        std::cout << h - 1 << " " << m + 15 << std::endl;
    } else {
        std::cout << "23 " << m + 15 << std::endl;
    }
    return 0;
}
