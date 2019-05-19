#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<int> set;
    for (int i = 10; i > 0; i--) {
        int n;
        std::cin >> n;
        set.insert(n % 42);
    }
    std::cout << set.size() << std::endl;
    return 0;
}
