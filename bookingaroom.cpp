#include <iostream>
#include <unordered_set>

int main() {
    int r, n; 
    std::cin >> r >> n;
    if (r == n) {
        std::cout << "too late" << std::endl;
    } else {
        std::unordered_set<int> set;
        for (int i = 1; i < r + 1; i++) {
            set.insert(i);
        }
        for (int i = 0; i < n; i++) {
            int number;
            std::cin >> number;
            set.erase(number);
        }
        std::cout << *(set.begin()) << std::endl;
    }
    return 0;
}
