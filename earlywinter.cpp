#include <iostream>

int main() {
    int n, dm; 
    std::cin >> n >> dm;
    for (int i = 0; i < n; i++) {
        int di;
        std::cin >> di;
        if (di <= dm) {
            std::cout << "It hadn't snowed this early in " << i 
                << " years!" << std::endl;
            break;
        } else if (i == n - 1) {
            std::cout << "It had never snowed this early!" << std::endl;
        }
    }
    return 0;
}
