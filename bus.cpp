#include <iostream>

int main() {
    int n; 
    std::cin >> n;
    while (n > 0) {
        int ppl = 0;
        int x;
        std::cin >> x;
        for (int i = x; i > 0; i--) {
            ppl = ppl * 2 + 1;
        }
        std::cout << ppl << std::endl;
        n--;
    }
    return 0;
}
