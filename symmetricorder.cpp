#include <iostream>
#include <vector>

int main() {
    int counter = 1;
    while (true) {
        int n;
        std::cin >> n;
        if (n == 0) {
            break;
        } 

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
        for (int i = arr.size() -1; i >= 0; i--) {
            std::cout << arr[i] << std::endl;
        }
        counter++;
    }
    return 0;
}
