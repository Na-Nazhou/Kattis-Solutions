#include <iostream>
#include <unordered_set>

int main() {
    while (true) {
        int N, M;
        std::cin >> N >> M;

        if (N == 0 && M == 0) {
            break;
        }

        std::unordered_set<int> set;
        int count = 0;

        while (N > 0) {
            int n;
            std::cin >> n;
            set.insert(n);
            N--;
        }

        while (M > 0) {
            int m; 
            std::cin >> m;
            if (set.find(m) != set.end()) {
                count++;
            }
            M--;
        }
        std::cout << count << std::endl;
    }
    return 0;
}
