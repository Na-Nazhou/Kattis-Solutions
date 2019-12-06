#include <iostream>
#include <string>
#include <sstream>

int main() {
    int T; 
    std::cin >> T;
    std::string str;
    std::getline(std::cin, str);
    while (T--) {
        std::string command;
        std::getline(std::cin, command);
        std::stringstream ss(command);
        std::string word;
        if (ss >> word && word == "Simon" && ss >> word && word == "says") {
            std::string first;
            std::string rest;
            ss >> first;
            std::getline(ss, rest);
            std::cout << first + rest << std::endl;
        } 
    }
    return 0;
}
