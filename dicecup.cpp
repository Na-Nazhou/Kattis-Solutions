#include <iostream>
#include <unordered_map>

// TODO
int main() {
    int a, b;
    std::cin >> a >> b;
    std::unordered_map<int, int> map;

    for (int i = 1; i < a + 1; i++) {
        for (int j = 1; j < b + 1; j++) {
            map[i + j]++;
        }
    }

    int max = 0;
    for (auto &n : map) {
        if (n.second > max) {
            max = n.second;
        }
    }

    for (auto &n : map) {
        if (n.second == max) {
            std::cout << n.first << std::endl;
        }
    }
    return 0;
}
