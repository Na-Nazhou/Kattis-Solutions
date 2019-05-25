#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

int main() {
    int n; 
    std::cin >> n;
    std::map<int, int> map;
    std::vector<int> vec;
    for (int i = 0; i < n; i++) {
        int b;
        std::cin >> b;
        vec.push_back(b);
    }
    std::sort(vec.begin(), vec.end());
    map[vec[0]] = 0;
    for (int i = 1; i < n; i++) {
        auto it = --map.end();
        int first = (*it).first;
        int second = (*it).second;
        if (first + second + 1 == vec[i]) {
            map[first]++;
        } else {
            map[vec[i]] = 0;
        }
    }

    if (n == 1) {
        std::cout << vec[0];
    } else if (n == 2) {
        std::cout << vec[0] << " " << vec[1] << std::endl;
    } else {
        for(auto &it : map) {
            int first = it.first;
            int second = it.second;
            if(second == 0) {
                std::cout << first << " ";
            } else if (second == 1){
                std::cout << first << " " << first + 1 << " ";
            } else {
                std::cout << first << "-" << first + second << " ";
            }
        }
    }
    return 0;
}
