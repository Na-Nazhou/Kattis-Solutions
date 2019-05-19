#include <iostream>
#include <math.h>

int main() {
    int n, w, h;
    std::cin >> n >> w >> h;
    int max = sqrt(w * w + h * h); 
    while (n > 0) {
        int x;
        std::cin >> x;
        std::cout << (x <= max ? "DA" : "NE") << std::endl;
        n--;
    }
    return 0;
}
