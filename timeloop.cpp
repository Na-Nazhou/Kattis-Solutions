#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int counter = 1;
    while (counter <= n) {
        std::cout << counter << " Abracadabra" << std::endl;
        counter++;
    }
    return 0;
}
