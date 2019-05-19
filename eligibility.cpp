#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::string name;
        std::cin >> name;
        int year, birth;
        int courses;
        std::string str;
        std::cin >> str;
        year = std::stoi(str.substr(0, 4));
        if (year >= 2010) {
            std::cout << name << " eligible" << std::endl;
            std::getline(std::cin, str);
            continue;
        }
        std::cin >> str;
        birth = std::stoi(str.substr(0, 4));
        if (birth >= 1991) {
            std::cout << name << " eligible" << std::endl;
            std::getline(std::cin, str);
            continue;
        }
        std::cin >> courses;
        if (courses <= 40) {
            std::cout << name << " coach petitions" << std::endl;
        } else {
            std::cout << name << " ineligible" << std::endl;
        } 
        
    }
    return 0;
}

