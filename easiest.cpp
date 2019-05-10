#include <iostream>

int getSum(int m) {
    int sum = 0;
    for (int i = m; i != 0; i /= 10) {
        sum += i % 10;
    }
    return sum;
}

int getNumber(int sum, int m, int n) {
    while (true) {
        if (getSum(n * m) == sum) {
            return n;
        }
        n++;
    }
}

int main() {
    while(true) {
        int m;
        std::cin >> m;
        if (m == 0) {
            break;
        } else {
            int sum = getSum(m);
            int n = getNumber(sum, m, 11); 
            std::cout << n << std::endl;
        }
    }
    return 0;
}
