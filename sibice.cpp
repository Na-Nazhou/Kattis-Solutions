#include <iostream>
#include <cmath>

int main() {
    int n, w, h;
    std::cin >> n >> w >> h;
    int max = std::sqrt(w * w + h * h); 
    while (n--) {
        int x;
        std::cin >> x;
        std::cout << (x <= max ? "DA" : "NE") << std::endl;
    }
    return 0;
}
