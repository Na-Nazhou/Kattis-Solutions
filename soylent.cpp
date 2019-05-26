#include <iostream>
#include <cmath>

int main() {
    int n; 
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        double min;
        std::cin >> min;
        std::cout << std::ceil(min / 400) << std::endl;
    }
    return 0;
}
