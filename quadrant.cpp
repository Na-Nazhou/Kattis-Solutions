#include<iostream>

int main() {
    int x, y;
    std::cin >> x >> y;
    int result;
    if (x > 0 && y > 0) {
        result = 1;
    } else if (x < 0 && y > 0) {
        result = 2;
    } else if (x < 0 && y < 0) {
        result = 3;
    } else {
        result = 4;
    }
    std::cout << result << std::endl;
    return 0;
}
