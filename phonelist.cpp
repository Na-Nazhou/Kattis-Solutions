#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int t;
    std::cin >> t;
    while (t > 0) {
        int n;
        std::cin >> n;
        std::vector<std::string> vec;
        for (int i = 0; i < n; i++) {
            std::string number;
            std::cin >> number;
            vec.push_back(number);
        }
        std::sort(vec.begin(), vec.end());
        bool no = false;
        for (int i = 0; i < n - 1; i++) {
            auto found = vec[i + 1].find(vec[i]); 
            if (found == 0) {
                std::cout << "NO" << std::endl;
                no = true;
                break;
            }
        }
        if (!no) { 
            std::cout << "YES" << std::endl;
        }
        t--;
    }
    return 0;
}
