#include <iostream>
#include <unordered_map>
#include <string>
#include <cctype>
#include <sstream>

int main() {
    std::unordered_map<char, std::string> map;
    map['a'] = "@";
    map['b'] = "8";
    map['c'] = "(";
    map['d'] = "|)";
    map['e'] = "3";
    map['f'] = "#";
    map['g'] = "6";
    map['h'] = "[-]";
    map['i'] = "|";
    map['j'] = "_|";
    map['k'] = "|<";
    map['l'] = "1";
    map['m'] = "[]\\/[]";
    map['n'] = "[]\\[]";
    map['o'] = "0";
    map['p'] = "|D";
    map['q'] = "(,)";
    map['r'] = "|Z";
    map['s'] = "$";
    map['t'] = "']['";
    map['u'] = "|_|";
    map['v'] = "\\/";
    map['w'] = "\\/\\/";
    map['x'] = "}{";
    map['y'] = "`/";
    map['z'] = "2";
    std::string str;
    std::getline(std::cin, str);
    for (auto &ch : str) {
        if (std::isalpha(ch)) {
            std::cout << map[std::tolower(ch)];
        } else {
            std::cout << ch;
        }
    }
    return 0;
}
