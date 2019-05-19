#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int min = 1000000000;
    int day = 0;
    for (int i = 0; i < n; i++) {
        int junk;
        std::cin >> junk;
        if (junk < min) {
            min = junk;
            day = i;
        }
    }
    std::cout << day << std::endl;
    return 0;
}
