#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n;
    while (n--) {
        int x;
        std::cin >> x;
        std::string result = x % 2 == 0 ? "even" : "odd"; 
        std::cout << x << " is " << result << std::endl;
    }
    return 0;
}
