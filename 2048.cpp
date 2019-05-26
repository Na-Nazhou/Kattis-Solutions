#include <iostream>
#include <vector>

void print(std::vector<std::vector<int>> grid) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            std::cout << grid[i][j] << " ";
        }
        std::cout << std::endl;
    }

}

std::vector<std::vector<int>> swipeLeft(std::vector<std::vector<int>> grid) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (grid[i][j] == 0) {
                for (int k = j; k < 4; k++) {
                    if (grid[i][k] != 0) {
                        grid[i][j] = grid[i][k];
                        grid[i][k] = 0;
                        break;
                    }
                }
            }
        }
        for (int j = 0; j < 3; j++) {
            if (grid[i][j] == 0) {
                break;
            }
            if (grid[i][j] == grid[i][j + 1]) {
                grid[i][j] *= 2;
                grid[i][j + 1] = 0;
                j++;
            }
        }
        for (int j = 0; j < 4; j++) {
            if (grid[i][j] == 0) {
                for (int k = j; k < 4; k++) {
                    if (grid[i][k] != 0) {
                        grid[i][j] = grid[i][k];
                        grid[i][k] = 0;
                        break;
                    }
                }
            }
        }
    }
    return grid;
}

std::vector<std::vector<int>> turnLeft(std::vector<std::vector<int>> grid) {
    std::vector<std::vector<int>> temp;
    for (int i = 0; i < 4; i++) {
        std::vector<int> vec;
        temp.push_back(vec);
        for (int j = 0; j < 4; j++) {
            (temp[i]).push_back(grid[j][3 - i]);
        }
    }
    return temp;
}

std::vector<std::vector<int>> turnRight(std::vector<std::vector<int>> grid) {
    std::vector<std::vector<int>> temp;
    for (int i = 0; i < 4; i++) {
        std::vector<int> vec;
        temp.push_back(vec);
        for (int j = 0; j < 4; j++) {
            (temp[i]).push_back(grid[3 - j][i]);
        }
    }
    return temp;
}


int main() {
    std::vector<std::vector<int>> grid; 
    for (int i = 0; i < 4; i++) {
        std::vector<int> vec;
        grid.push_back(vec);
        for (int j = 0; j < 4; j++) {
            int val;
            std::cin >> val;
            (grid[i]).push_back(val);
        }
    }
    int move;
    std::cin >> move;
    if (move == 0) {
        grid = swipeLeft(grid);
    } else if (move == 1) {
        grid = turnLeft(grid);
        grid = swipeLeft(grid);
        grid = turnRight(grid);
    } else if (move == 2) {
        grid = turnLeft(grid);
        grid = turnLeft(grid);
        grid = swipeLeft(grid);
        grid = turnLeft(grid);
        grid = turnLeft(grid);
    } else if (move == 3) {
        grid = turnRight(grid);
        grid = swipeLeft(grid);
        grid = turnLeft(grid);
    }
    print(grid); 
    return 0;
}
