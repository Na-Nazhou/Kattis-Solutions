#include <iostream>
#include <string>
#include <cmath>
#include <vector>

int pad(std::string &s) {
    int n = s.length();
    int x = std::ceil(std::sqrt(n));
    for (int i = 0; i < x * x - n; i++) {
        s.push_back('*');
    }
    return x;
}


int main() {
    int n;
    std::cin >> n;
    while (n > 0) {
        std::string s;
        std::cin >> s; 
        std::string &str = s;
        int x = pad(str);
        std::vector<std::vector<char> > arr;
        int count = 0;
        for (int i = 0; i < x; i++) {
            arr.push_back(std::vector<char>());
            for (int j = 0; j < x; j++) {
                arr[i].push_back(s[count]);
                count++;
            }
        }

        for (int j = 0; j < x; j++) {
            for (int i = x - 1; i >= 0; i--) {   
                if (arr[i][j] != '*') {
                    std::cout << arr[i][j];
                }
            }
        }
        std::cout << std::endl;
        n--;
    }
    return 0;
}
