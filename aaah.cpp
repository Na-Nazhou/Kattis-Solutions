// The first line is the “aaah” Jon Marius is able to say that day. 
// The second line is the “aah” the doctor wants to hear. 
// Each line will contain between 0 and 999 ’a’s, inclusive, followed by a single ’h’.

#include <iostream>
#include <string>

int main() {
    std::string s1, s2;     
    getline(std::cin, s1);
    getline(std::cin, s2);
    
    if (s1.length() >= s2.length()) {
        std::cout << "go" << std::endl;
    } else {
        std::cout << "no" << std::endl;
    }

    return 0;
}
