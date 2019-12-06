#include <iostream>

int main() {
    int n;
    std::cin >> n;
    while (n--) {
        int r, e, c;
        std::cin >> r >> e >> c;
        int diff = r - (e - c);
        std::cout << (diff > 0 ? "do not advertise"
                : diff == 0 ? "does not matter"
                : "advertise") << std::endl;
    }
    return 0;
}
