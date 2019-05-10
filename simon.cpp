#include <iostream>
#include <string>
#include <sstream>

//TODO
int main() {
    int T; 
    std::cin >> T;
    for (int i = 0; i < T; i++) {
        std::string command;
        std::getline(std::cin, command);
        std::stringstream ss(command);
        std::string word;
        ss >> word;
        if (word == "simon") {
            ss >> word;
            if (word == "says") {
                std::string first;
                std::string rest;
                ss >> first;
                std::getline(ss, command);
                std::cout << first + command;
            } else {
                std::cout << std::endl;
            }
        } else {
            std::cout << std::endl;
        }
    }
    return 0;
}
