#include <iostream>

int main() {
    int a, b;
    while (std::cin >> a >> b, (a || b)) {
        std::cout << a / b << " " << a % b << " / " << b  << std::endl;
    }
    return 0;
}
