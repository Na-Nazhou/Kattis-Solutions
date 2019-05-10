#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int count = 0;
    while (n > 0) {
        int t;
        std::cin >> t;
        if (t < 0) {
            count++;
        }
        n--;
    }
    std::cout << count << std::endl;
    return 0;
}

