#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    int n; 
    std::cin >> n;
    long double result = 1;
    long double base = 1; 
    for (int i = 1; i < n + 1; i++) {
        result += (long double)1 / base;
        base *= (i + 1);
    }
    std::cout << std::setiosflags(std::ios::fixed) <<
        std::setprecision(17) << result << std::endl;
    return 0;
}
