#include <iostream>

int main() {
    int x, n;
    std::cin >> x >> n;
    int result = 0;
    while (n--) {
        int used;
        std::cin >> used;
        result += x - used;
    }
    std::cout << result + x << std::endl;
    return 0;
}
