#include <iostream>
#include <algorithm>
#include <vector>
int main() {
    std::vector<int> vec;
    for (int i = 0; i < 4; i++) {
        int n;
        std::cin >> n;
        vec.push_back(n);
    }
    std::sort(vec.begin(), vec.end());
    std::cout << vec[0] * vec[2] << std::endl;
    return 0;
}
