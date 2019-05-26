#include <iostream>
#include <sstream>
#include <string>

int main() {
    int p = 13, k = 13, h = 13, t = 13;
    bool arr[4][14];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 14; j++) {
            arr[i][j] = false;
        }
    }
    bool dup = false;
    std::string str;
    std::getline(std::cin, str);
    for (int i = 0; i < str.size(); i = i + 3) {
        char suit = str[i];
        int n;
        std::stringstream ss;
        ss << str.substr(i + 1, i + 2);
        ss >> n;
        if (suit == 'P') {
            if (arr[0][n]) {
                dup = true;
                break;
            } else {
                arr[0][n] = true;
                p--;
            }
        } 
        if (suit == 'K') {
            if (arr[1][n]) {
                dup = true;
                break;
            } else {
                arr[1][n] = true;
                k--;
            }
        } 
        if (suit == 'H') {
            if (arr[2][n]) {
                dup = true;
                break;
            } else {
                arr[2][n] = true;
                h--;
            }
        } 
        if (suit == 'T') {
            if (arr[3][n]) {
                dup = true;
                break;
            } else {
                arr[3][n] = true;
                t--;
            }
        } 
    }
    if (dup) {
        std::cout << "GRESKA" << std::endl;
    } else {
        std::cout << p << " " << k << " " << h << " " << t << " "
            << std::endl;
    }
    return 0;
}
