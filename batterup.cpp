#include <iostream>

int main() {
    int n;
    int count = 0;
    double sum = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int val;
        std::cin >> val;
        if (val == -1) {
            continue;
        } else {
            sum += val;
            count++;
        }
    }
    std::cout << sum / count  << std::endl;
    return 0;
}
