#include <iostream>
#include <unordered_set>
#include <string>
#include <sstream>

int main() {
    std::string question, ans;
    std::unordered_set<char> set;
    std::cin >> question;
    std::cin >> ans;
    std::stringstream ss(question);
    char letter;
    while (ss >> letter) {
        set.insert(letter);
    }
    std::stringstream ss2(ans);
    int count = 0;
    bool lose = false;
    for (int i = 0; i < 26; i++) {
        ss2 >> letter;
        if (set.size() == 0 && count < 10) {
            break;
        } 

        if (count >= 10) {
            lose = true;
            break;
        }

        if (set.find(letter) != set.end()) {
            set.erase(letter);
        } else {
            count++;
        }
    }
    std::cout << (lose ? "LOSE" : "WIN") << std::endl;
    return 0;
}
