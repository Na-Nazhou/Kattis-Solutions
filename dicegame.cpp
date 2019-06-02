#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

int calculate() {
int a1, b1, a2, b2;
    std::cin >> a1 >> b1 >> a2 >> b2;
    std::unordered_map<int, int> map;

    for (int i = a1; i < b1 + 1; i++) {
        for (int j = a2; j < b2 + 1; j++) {
            map[i + j]++;
        }
    }

    int max_freq = 0;
    int max_sum;
    for (auto &n : map) {
        if (n.second >= max_freq) {
            max_freq = n.second;
            max_sum = n.first;
        }
    }
    return max_sum;
}

int main() {
    int gunnar = calculate();
    int emma = calculate();
    if (emma > gunnar) {
        std::cout << "Emma" << std::endl;
    } else if (emma == gunnar) {
        std::cout << "Tie" << std::endl;
    } else {
        std::cout << "Gunnar" << std::endl;
    }
    return 0;
}
