#include <iostream>

int main() {
    int p; 
    std::cin >> p;
    while (p--) {
        int n;
        int k;
        std::cin >> n >> k;
        int s1 = (1 + k) * k / 2;
        int s2 = (1 + 2 * k - 1) * k / 2;
        int s3 = (2 + 2 * k) * k / 2;
        std::cout << n << " " 
            << s1 << " " 
            << s2 << " " 
            << s3 
            << std::endl;
    }
    return 0;
}
