#include <iostream>
#include <iomanip> 

int main() {
    int n;
    std::cin >> n;
    double qaly = 0;
    while (n > 0) {
        n--;
        double q;
        double y;
        std::cin >> q >> y;
        qaly += q * y;
    }
    std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(3) << qaly << std::endl;
    return 0;
}
