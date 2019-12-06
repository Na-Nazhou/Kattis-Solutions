#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    long long a; 
    std::cin >> a;
    long double result = (long double)std::sqrt(a) * 4;
    std::cout << std::setiosflags(std::ios::fixed) 
        << std::setprecision(8) 
        << result 
        << std::endl;
    return 0;
}
