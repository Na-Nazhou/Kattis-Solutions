#include <iostream>

int getsum(int n) {
    int result = 0;
    for (int i = n; i != 0; i /= 10) {
        result += i % 10;
    }
    return result;
}

int getmin(int l, int x) {
    int counter = l;
    while (getsum(counter) != x) {
        counter++;
    }
    return counter;
}

int getmax(int m, int x) {
    int counter = m;
    while (getsum(counter) != x) {
        counter--;
    }
    return counter;
}

int main() {
    int l, m, x;
    std::cin >> l >> m >> x;
    std::cout << getmin(l, x) << std::endl << getmax(m, x) << std::endl;
    return 0;
}

      
