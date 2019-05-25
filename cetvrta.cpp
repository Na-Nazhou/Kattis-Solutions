#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<int> x;
    std::unordered_set<int> y;
    for(int i = 0; i < 3; i++) {
        int a, b;
        std::cin >> a >> b;
        if (x.find(a) == x.end()) {
            x.insert(a);
        } else {
            x.erase(a);
        }
        if (y.find(b) == y.end()) {
            y.insert(b);
        } else {
            y.erase(b);
        }
    }
    std::cout << *(x.begin()) << " " << *(y.begin()) << std::endl;
    return 0;
}
