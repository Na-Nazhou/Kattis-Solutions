#include <iostream>

int main() {
    int n;
    while (std::cin >> n, n != -1) {         
        int total = 0, prev = 0;
        while (n--) {
            int speed, time;
            std::cin >> speed >> time;
            total += speed * (time - prev);
            prev = time;
        }
        std::cout << total << " miles"  << std::endl;
    }
    return 0;
}
