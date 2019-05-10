#include <iostream>

int main() {
    while (true) {
        int a, b;
        std::cin >> a >> b;
        if (a == 0 && b == 0) {
            break;
        } 
        std::cout << a / b << " " << a % b << " / " << b  << std::endl;
    }
    return 0;
}
