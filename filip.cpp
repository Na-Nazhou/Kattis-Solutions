#include<iostream>
int transform(int n) {
    int first, second, third;
    first = n % 10;
    second = (n / 10) % 10;
    third = n / 100;
    return first * 100 + second * 10 + third;
}

int main() {
    int a, b;
    std::cin >> a >> b;
    int newa = transform(a);
    int newb = transform(b);
    std::cout << (newa > newb ? newa : newb) << std::endl;
    return 0;
}

