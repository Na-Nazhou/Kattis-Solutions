#include <iostream>
#include <unordered_set>
#include <string>
#include <sstream>

int main() {
    int t;
    std::cin >> t;
    std::string str;
    std::getline(std::cin, str);
    while (t > 0) {
        std::string sounds;
        std::string sound;
        std::getline(std::cin, sounds);
        std::stringstream ss(sounds);
        std::unordered_set<std::string> set;

        while (true) {
            std::string info;
            std::getline(std::cin, info);
            std::stringstream stream(info);
            if (info == "what does the fox say?") {
                break;
            } else {
                std::string animal;
                while (stream >> animal) {
                    if (animal == "goes") {
                        break;
                    }
                }
                stream >> animal;
                set.insert(animal);
            }
        }       

        bool first = true;
        while (ss >> sound) {
            if (set.find(sound) == set.end()) {
                if (first) {
                    std::cout << sound;
                    first = false;
                } else {
                    std::cout << " " << sound;
                }
            }
        }
        std::cout << std::endl;
        t--;
    }
    return 0;
}
