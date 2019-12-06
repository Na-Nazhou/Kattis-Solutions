#include <iostream>
#include <cmath>

int main() {
    int n; 
    std::cin >> n;
    while (n--) {
        double min;
        std::cin >> min;
        std::cout << std::ceil(min / 400) << std::endl;
    }
    return 0;
}
