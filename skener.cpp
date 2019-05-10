#include <iostream>
#include <vector>

int main() {
    int r, c, zr, zc; 
    std::cin >> r >> c >> zr >> zc;
    char arr[r * zr][c * zc];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            char ch;
            std::cin >> ch;
            for(int row = i * zr; row < (i + 1) * zr; row++) {
                for (int col = j * zc; col < (j + 1) * zc; col++) {
                    arr[row][col] = ch;
                }
            }
        }
    }
    
    for (int i = 0; i < r * zr; i++) {
        for (int j = 0; j < c * zc; j++) { 
            std::cout << arr[i][j];
        }
        std::cout << std::endl;
    }
    return 0;
}
