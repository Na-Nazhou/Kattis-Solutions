#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int count = 0;
    while (n--) {
        int t;
        std::cin >> t;
        if (t < 0) {
            count++;
        }
    }
    std::cout << count << std::endl;
    return 0;
}

