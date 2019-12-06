// Data structures: deque

#include <iostream>
#include <deque>

int main() {
    char ch;
    std::deque<char> deque;
    while (std::cin >> ch) {
        if (ch == '<') {
            deque.pop_back();
        } else {
            deque.push_back(ch);
        }
    }

    while (!deque.empty()) {
        std::cout << deque.front();
        deque.pop_front();
    }
    return 0;
}
