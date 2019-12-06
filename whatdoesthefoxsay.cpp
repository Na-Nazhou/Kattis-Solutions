#include <iostream>
#include <unordered_set>
#include <string>
#include <sstream>

int main() {
    int t;
    std::cin >> t;
    std::string str;
    std::getline(std::cin, str);
    while (t--) {
        std::string sounds;
        std::getline(std::cin, sounds);
        std::stringstream ss(sounds);
        std::unordered_set<std::string> set;

        std::string info;
        while (std::getline(std::cin, info), info != "what does the fox say?") {
            
            
            std::stringstream stream(info);
            std::string animal;
            while (stream >> animal && animal != "goes") {
   
            }
            stream >> animal;
            set.insert(animal);
        }       

        bool first = true;
        std::string sound;
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
    }
    return 0;
}
