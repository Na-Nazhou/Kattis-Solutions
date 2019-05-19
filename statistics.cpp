#include <iostream>

int main() {
    int n;
    int caseNo = 1;
    while (std::cin >> n) {
        int max = -1000000;
        int min = -max;
        for (int i = 0; i < n; i++) {
            int x;
            std::cin >> x;
            if (x > max) {
                max = x;
            } 
            if (x < min) {
                min = x;
            }
        }
        int range = max - min;
        std::cout << "Case " << caseNo << ": " <<
            min << " " << max << " " << range << std::endl;
        caseNo++;
    }
    return 0;
}

