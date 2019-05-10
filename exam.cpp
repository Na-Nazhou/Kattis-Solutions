#include <iostream>
#include <string>

int main() {
    int n;
    int x = 0;
    std::string s1, s2;
    std::cin >> n >> s1 >> s2;
    for (int i = 0; i < s1.length(); i++) {
        if (s1[i] == s2[i]) {
            n > 0
            ? n--
            : x++;
        }
    }
    std::cout << s1.length() - n - x << std::endl;
    return 0;
}
