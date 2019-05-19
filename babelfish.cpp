#include <iostream>
#include <unordered_map>
#include <string>
#include <sstream>

int main() {
    std::string line;
    std::getline(std::cin, line);
    std::unordered_map<std::string, std::string> map;
    while (line != "") {
        std::stringstream ss(line);
        std::string key, value;
        ss >> value >> key;
        map[key] = value;
        std::getline(std::cin, line);
    }

    while (std::getline(std::cin, line)) {
        if (map.find(line) == map.end()) {
            std::cout << "eh" << std::endl;
        } else {
            std::cout << map[line] << std::endl;
        }
    }
    return 0;
}


        

