// The first line contains the three positive integers 𝐴, 𝐵 and 𝐶, not necessarily in that order. 
// The three numbers will be less than or equal to 100.
// The second line contains three uppercase letters ’A’, ’B’ and ’C’ (with no spaces between them) representing the desired order.

// Data strucutres: array, unordered_map
// Algorithms: sort

#include <iostream>
#include <algorithm>
#include <array>
#include <unordered_map>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
    
    std::array<int, 3> arr = { a, b, c };
    std::sort(arr.begin(), arr.end());
    std::unordered_map<char, int> map;
    map['A'] = arr[0];
    map['B'] = arr[1];
    map['C'] = arr[2];
    
    for (int i = 0; i < 3; i++) { 
        char order;
        std::cin >> order;
        if (i != 0) {
            std::cout << " ";
        }
        std::cout << map[order];
    }
    std::cout << std::endl;

    return 0;
}
