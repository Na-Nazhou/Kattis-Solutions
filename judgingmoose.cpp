#include <iostream>
#include <algorithm>

int main() {
    int a, b; 
    std::cin >> a >> b; 
    if (a == 0 && b == 0) {
        std::cout << "Not a moose" << std::endl;
    } else if (a == b) {
        std::cout << "Even " << 2 * a << std::endl;
    } else {
        std::cout << "Odd " << 2 * std::max(a, b) << std::endl;
    }
    return 0;
}
