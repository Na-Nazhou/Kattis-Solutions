#include <iostream>

int main() {
    while (true) { 
        int n;
        std::cin >> n;
        if (n == -1) {
            break;
        }
        
        int total = 0;
        int prev = 0;
        while (n > 0) {
            int speed, time;
            std::cin >> speed >> time;
            total += speed * (time - prev);
            prev = time;
            n--;
        }
        std::cout << total << " miles"  << std::endl;
    }
    return 0;
}
