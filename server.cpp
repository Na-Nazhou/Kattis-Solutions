#include <iostream>

int main() {
    int n, t;
    std::cin >> n >> t;
    int sum = 0, count = 0;
    while (n--) {
        int x;
        std::cin >> x;
        if (sum + x <= t) {
            count++;
            sum += x;
        } else {
            break;
        }
    }
    std::cout << count << std::endl;
    return 0;
}
