#include <iostream>

int main() {
    int n; 
    std::cin >> n;
    while (n--) {
        int ppl = 0, x;
        std::cin >> x;
        for (int i = x; i > 0; i--) {
            ppl = ppl * 2 + 1;
        }
        std::cout << ppl << std::endl;
    }
    return 0;
}
