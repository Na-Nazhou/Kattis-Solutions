#include <iostream>

int main() {
    int t; 
    std::cin >> t;
    while (t > 0) {
        int n;
        std::cin >> n;
        int min = 99;
        int max = 0;
        while (n > 0) {
            int x;
            std::cin >> x;
            if (x < min) {
                min = x;
            } 
            if (x > max) {
                max = x;
            }
            n--;
        }
        std::cout << (max - min) * 2 << std::endl;
        t--;
    }
    return 0;
}
