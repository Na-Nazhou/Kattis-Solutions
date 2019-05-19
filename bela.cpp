#include <iostream>

int main() {
    int N;
    char B;
    std::cin >> N >> B;
    int value = 0;
    for (int i = 0; i < 4 * N; i++) {
        char card, suit;
        std::cin >> card >> suit;
        switch (card) {
            case 'A': 
                value += 11;
                break;
            case 'K':
                value += 4;
                break;
            case 'Q':
                value += 3;
                break;
            case 'J':
                if (suit == B) {
                    value += 20;
                } else {
                    value += 2;
                }
                break;
            case 'T':
                value += 10;
                break;
            case '9':
                if (suit == B) { 
                    value += 14;
                } 
                break;
            case '8': case '7': 
                break;
        }
    }
    std::cout << value << std::endl;
    return 0;
}
