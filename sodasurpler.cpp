#include <iostream>

int find(int x, int c) {
    if (x < c) {
        return 0;
    } else {
        return x / c + find(x % c + x / c, c);
    }
}

int main() {
    int e, f, c; 
    std::cin >> e >> f >> c;
    int n = find(e + f, c);
    std::cout << n << std::endl;
    return 0;
}
