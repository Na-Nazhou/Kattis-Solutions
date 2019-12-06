#include <iostream>
#include <vector>

int main() {
    int counter = 1;
    int n;
    while (std::cin >> n, n != 0) {
        std::cout << "SET " << counter << std::endl;
        std::vector<std::string> arr;
        for (int i = 0; i < n; i++) {
            std::string str;
            std::cin >> str;
            if (i % 2 == 0) {
                std::cout << str << std::endl;
            } else {
                arr.push_back(str);
            }
        }
        for (std::string str : arr) {
            std::cout << str << std::endl;
        }
        counter++;
    }
    return 0;
}
