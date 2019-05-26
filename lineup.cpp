#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    int n; 
    std::cin >> n;
    std::vector<std::string> vec;
    std::vector<std::string> copy;
    for (int i = 0; i < n; i++) {
        std::string name;
        std::cin >> name;
        vec.push_back(name);
        copy.push_back(name);
    }
    std::sort(copy.begin(), copy.end());
    int count = 0;
    bool inc = true;
    bool dec = true;
    for (auto i : vec) {
        if (i != copy[count]) {
            inc = false;
        }
        if (i != copy[n - count - 1]) {
            dec = false;
        }
        if (!inc && !dec) {
            break;
        }
        count++;
    }
    if (inc) {
        std::cout << "INCREASING" << std::endl;
    } else if (dec) {
        std::cout << "DECREASING" << std::endl;
    } else {
        std::cout << "NEITHER" << std::endl;
    }
    return 0;
}
