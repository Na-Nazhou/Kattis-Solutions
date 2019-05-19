#include <iostream>
#include <iomanip>

int main() {
    int r, c; 
    std::cin >> r >> c; 
    double result = (double)(r - c) * (r - c) / (r * r) * 100; 
    std::cout << std::setiosflags(std::ios::fixed) <<
        std::setprecision(7) << result << std::endl;
    return 0;
}
