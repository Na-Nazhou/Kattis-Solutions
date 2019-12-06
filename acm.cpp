// Data strucutres: unordered_set

#include <iostream>
#include <unordered_set>
#include <string>
#include <unordered_map>

int main() {
    std::unordered_map<std::string, int> map;
    std::unordered_set<std::string> set;
    int time = 0;
    int m; 
    while (std::cin >> m, m != -1) {
        std::string qn, result;
        std::cin >> qn >> result;
        if (result == "right") {
            set.insert(qn);
            map[qn] += m;
        } else {
            map[qn] += 20;
        }
    }
    for (auto &qn : set) {
        time += map[qn];
    }
    std::cout << set.size() << " " << time << std::endl;
    return 0;
}
