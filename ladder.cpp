#include <iostream>
#include <cmath>

int main() {
    int h, v; 
    std::cin >> h >> v;
    std::cout << std::ceil(h / std::sin((double)v * 3.14159265 / 180)) 
        << std::endl;
    return 0;
}
