#include <iostream>
#include <vector>
#include <unordered_set>
#include <cctype>

int main() {
    int n;
    std::cin >> n;
    std::string line;
    std::getline(std::cin, line);
    std::vector<char> vec = {'a', 'b', 'c', 'd', 'e',
            'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o',
            'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    while (n > 0) {
        std::unordered_set<char> set;
        std::getline(std::cin, line);
        for (auto ch : line) {
            if (std::isalpha(ch)) {
                set.insert(std::tolower(ch));
            }
        }

        if (set.size() == 26) {
            std::cout << "pangram" << std::endl;
        } else {
            std::cout << "missing ";
            for (auto ch : vec) {
                if (set.find(ch) == set.end()) {
                    std::cout << ch;
                }
            }
            std::cout << std::endl;
        }
        n--;
    }
    return 0;
}
