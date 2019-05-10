#include <iostream>
#include <algorithm> 

//TODO
int find(int n, int x) {
    if (n <= x) {
        return 1;
    } else {
        return 1 + std::min(find(n - x, x), find(n, 2 * x));
    }
}

int main() {
    int n; 
    std::cin >> n; 
    std::cout << find(n, 1) << std::endl;
    return 0;
}
