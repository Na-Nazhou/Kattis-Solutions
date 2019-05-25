#include <iostream>
#include <cmath>

int main() {
    int n; 
    std::cin >> n; 
    n = std::ceil(std::log2(n));
    n++;
    std::cout << n << std::endl;
    return 0;
}
