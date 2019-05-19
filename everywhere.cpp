#include <iostream>
#include <unordered_set>
#include <string>

int main() {
    int t;
    std::cin >> t;
    while (t > 0) {
        int n;
        std::cin >> n;
        std::unordered_set<std::string> set;
        while (n > 0) {
            std::string place;
            std::cin >> place;
            set.insert(place);
            n--;
        }
        std::cout << set.size() << std::endl;
        t--;
    }
    return 0;
}
