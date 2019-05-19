#include <iostream>

int main() {
    int n, t;
    std::cin >> n >> t;
    int sum = 0, count = 0;
    for (int i = 0; i < n; i++) {
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
