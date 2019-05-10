#include <iostream> 

int calculate(int n) {
    if (n == 1) {
        return 3;
    } else {
        return 2 * calculate(n - 1) - 1;
    }
}

int main() {
    int n;
    std::cin >> n;
    int result = calculate(n);
    std::cout << result * result << std::endl;
    return 0;
}


