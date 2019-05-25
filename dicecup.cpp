#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

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
    
    std::vector<int> vec;
    for (auto &n : map) {
        if (n.second == max) {
            vec.push_back(n.first);
        }
    }

    std::sort(vec.begin(), vec.end());
    for (auto &n : vec) {
        std::cout << n << std::endl;
    }
    return 0;
}
