#include <iostream>
#include <unordered_set>

int main() {
    int N, M;
    while (std::cin >> N >> M, (N || M)) {
        std::unordered_set<int> set;
        int count = 0;

        while (N--) {
            int n;
            std::cin >> n;
            set.insert(n);
        }

        while (M--) {
            int m; 
            std::cin >> m;
            if (set.find(m) != set.end()) {
                count++;
            }
        }
        std::cout << count << std::endl;
    }
    return 0;
}
