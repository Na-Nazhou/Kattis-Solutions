#include <iostream>

int getSum(int m) {
    int sum = 0;
    for (int i = m; i != 0; i /= 10) {
        sum += i % 10;
    }
    return sum;
}

int main() {
    int n; 
    std::cin >> n;
    while (true) {
        if (n % getSum(n) == 0) {
            std::cout << n << std::endl;
            break;
        } 
        n++;
    }
    return 0;
}
