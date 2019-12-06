#include <iostream>

int main() {
    int n, count = 0, sum = 0;
    std::cin >> n;
    while (n--) {
        int val;
        std::cin >> val;
        if (val != -1) {
            sum += val;
            count++;
        }
    }
    std::cout << (double)sum / count  << std::endl;
    return 0;
}
