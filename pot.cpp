#include <iostream>
#include <cmath>

int main() {
    int n;
    std::cin >> n;
    long result = 0;
    while (n--) {
        int x;
        std::cin >> x;
        int number = x / 10;
        int power = x % 10;
        result += std::pow(number, power);
    }
    std::cout << result << std::endl;
    return 0;
}
