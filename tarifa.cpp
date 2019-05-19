#include <iostream>

int main() {
    int x, n;
    std::cin >> x >> n;
    int result = 0;
    while (n > 0) {
        int used;
        std::cin >> used;
        result += x - used;
        n--;
    }
    std::cout << result + x << std::endl;
    return 0;
}
