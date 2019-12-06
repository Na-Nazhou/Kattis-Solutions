#include <iostream>
#include <unordered_set>
#include <string>

int main() {
    std::unordered_set<std::string> set; 
    std::string str;
    bool nodup = true;
    while (std::cin >> str) {
        if (set.find(str) == set.end()) {
            set.insert(str);
        } else {
            nodup = false;
            break;
        }
    }
    std::cout << (nodup ? "yes" : "no") << std::endl;
    return 0;
}
