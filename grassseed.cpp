#include <iostream>
#include <iomanip>

int main() {
    double c;
    int L;
    std::cin >> c >> L;
    double result = 0;
    while (L > 0) {
        double w, l;
        std::cin >> w >> l;
        result += w * l;
        L--;
    }
    std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(7) 
        << result * c << std::endl;
    return 0;
}
