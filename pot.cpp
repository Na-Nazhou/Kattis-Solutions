#include <iostream>
#include <math.h>

int main() {
    int n;
    std::cin >> n;
    long result = 0;
    while (n > 0) {
        int x;
        std::cin >> x;
        int number = x / 10;
        int power = x % 10;
        result += pow(number, power);
        n--;
    }
    std::cout << result << std::endl;
    return 0;
}
