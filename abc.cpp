#include <iostream>
#include <algorithm>

int main() {
    int a, b, c;
    int mid;
    std::cin >> a >> b >> c;
    const int &min = std::min({a, b, c});
    const int &max = std::max({a, b, c});
    if (min == a) {
        max == b ? mid = c : mid = b;
    } else if (min == b) {
        max == a ? mid = c : mid = a;
    } else {
        max == a ? mid = b : mid = a;
    }
    
    char order;
    for (int i = 0; i < 3; i++) { 
        std::cin >> order;
        switch (order) {
            case 'A':
                std::cout << min;
                if (i != 2) {
                    std::cout << " ";
                }
                break;
            case 'B':
                std::cout << mid;
                if (i != 2) {
                    std::cout << " ";
                }
                break;
            case 'C':
                std::cout << max;
                if (i != 2) {
                    std::cout << " ";
                }
                break;
        }
    }
    return 0;
}
