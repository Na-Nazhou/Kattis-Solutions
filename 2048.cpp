// If two tiles of the same number collide while moving, 
// they will merge into a tile with the total value of the two tiles that collided. 
// The resulting tile cannot merge with another tile again in the same move.
// The fifth line of input contains an integer 0, 1, 2, or 3 that denotes a 
// left, up, right, or down move executed by the player, respectively.
// Output the new state of of the 4 x 4 grid of 2048 puzzle.

// TODO: improve the explanation

#include <iostream>
#include <vector>

// Print the grid 
void print(std::vector<std::vector<int>> grid) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (j != 0) {
                std::cout << " ";
            }
            std::cout << grid[i][j];
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
    // read the grid
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

    // read the move 
    int move;
    std::cin >> move;

    if (move == 0) { // left
        grid = swipeLeft(grid);
    } else if (move == 1) { // up
        grid = turnLeft(grid);
        grid = swipeLeft(grid);
        grid = turnRight(grid);
    } else if (move == 2) { // right
        grid = turnLeft(grid);
        grid = turnLeft(grid);
        grid = swipeLeft(grid);
        grid = turnLeft(grid);
        grid = turnLeft(grid);
    } else if (move == 3) { // down
        grid = turnRight(grid);
        grid = swipeLeft(grid);
        grid = turnLeft(grid);
    }
    print(grid); 

    return 0;
}
