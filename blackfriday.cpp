#include <iostream>
#include <map>
#include <vector>

int main() {
    int n; 
    std::cin >> n;
    std::map<int, std::vector<int>> map;
    for (int i = 1; i < 7; i++) {
        std::vector<int> vec;
        map.insert({i, vec});
    }
    for (int i = 1; i < n + 1; i++) {
        int val;
        std::cin >> val;
        (map[val]).push_back(i);
    }
    bool uniq = false;
    for (auto it = map.rbegin(); it != map.rend(); it++) {
        if ((it->second).size() == 1) {
            std::cout << (it->second)[0] << std::endl;
            uniq = true;
            break;
        }
    }
    if (!uniq) {
        std::cout << "none" << std::endl;
    }
    return 0;
}
