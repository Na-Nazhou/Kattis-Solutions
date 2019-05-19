#include <algorithm>
#include <iostream>

int main() {
    int maxn = 0;
    int maxs = 1;
    for (int i = 1; i < 6; i++) {
        int s1, s2, s3, s4;
        std::cin >> s1 >> s2 >> s3 >> s4;
        int sum = s1 + s2 + s3 + s4;
        if (sum > maxs) {
            maxn = i;
            maxs = sum;
        }
    }
    std::cout << maxn << " " << maxs << std::endl;
    return 0;
}
