#include <iostream>

void print(int n) {
    int x;
    std::cin >> x;
    std::cout << " " << n - x;
    return;
}

int main() {
    int king;
    std::cin >> king;
    std::cout << 1 - king;
    
    print(1);
    for (int i = 3; i > 0; i--) {
        print(2);
    }
    print(8);
    std::cout << std::endl;
    
    return 0;
}


