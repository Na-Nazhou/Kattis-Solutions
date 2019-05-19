#include <iostream>
#include <algorithm>

int find(int a, int b, int c) {
    if (b - a == 1 && c - b == 1) {
        return 0;
    } else if (b - a == 1) {
        return 1 + find(b, b + 1, c);
    } else if (c - b == 1) {
        return 1 + find(a, b - 1, b);
    } else {
        return 1 + std::max(find(b, b + 1, c), find(a, b - 1, b));
    }
}

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
    int n = find(a, b, c);
    std::cout << n << std::endl;
}

