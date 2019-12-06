#include <iostream>

int main() {
    int t; 
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        int min = 99;
        int max = 0;
        while (n--) {
            int x;
            std::cin >> x;
            if (x < min) {
                min = x;
            } 
            if (x > max) {
                max = x;
            }
        }
        std::cout << (max - min) * 2 << std::endl;
    }
    return 0;
}
