#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>

int main() {
    int T; 
    std::cin >> T;
    while (T > 0) {
        int N;
        std::cin >> N;
        std::map<std::string, int> map;
        for (int i = 0; i < N; i++) {
            std::string toy;
            int n;
            std::cin >> toy >> n;
                map[toy] += n;
        }
        std::vector<std::pair<int, std::string>> vec;
        for (auto p : map) {
            vec.push_back(make_pair(-p.second, p.first));
        }

        std::cout << map.size() << std::endl;
        std::sort(vec.begin(), vec.end());

        for (auto p : vec) {
            std::cout << p.second << " " << -p.first << std::endl;
        }
        T--;
    }
    return 0;
}
