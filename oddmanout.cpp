#include <iostream>
#include <unordered_set>

int main() {
    int n; 
    std::cin >> n;
    for (int i = 1; i < n + 1; i++) {
        std::cout << "Case #" << i << ": ";
        int g;
        std::cin >> g;
        std::unordered_set<int> set;
        for (int j = 0; j < g; j++) {
            int c;
            std::cin >> c;
            if (set.find(c) == set.end()) {
                set.insert(c);
            } else {
                set.erase(c);
            }
        }
        std::cout << *set.begin() << std::endl;
    }
    return 0;
}
