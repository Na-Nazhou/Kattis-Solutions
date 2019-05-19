#include <iostream>
#include <string>
#include <sstream>

int main() {
    int T; 
    std::cin >> T;
    std::string str;
    std::getline(std::cin, str);
    for (int i = 0; i < T; i++) {
        std::string command;
        std::getline(std::cin, command);
        std::stringstream ss(command);
        std::string word;
        if (ss >> word && word == "simon" && ss >> word && word == "says") {
            std::string first;
            std::string rest;
            ss >> first;
            std::getline(ss, rest);
            std::cout << first + rest << std::endl;
        } else {
            std::cout << std::endl;
        }
    }
    return 0;
}
