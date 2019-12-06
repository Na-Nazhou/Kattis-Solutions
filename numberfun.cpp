#include <iostream>

int main() {
    int n; 
    std::cin >> n;
    while (n--) {
        bool possible = false;
        int op1, op2, result;
        std::cin >> op1 >> op2 >> result;
        if (op1 + op2 == result || 
                op1 * op2 == result ||
                op1 - op2 == result || 
                op2 - op1 == result ||
                ((double)op1 / op2 - result > -10e-6 &&
                 (double)op1 / op2 - result < 10e-6) ||
            ((double)op2 / op1 - result > -10e-6 &&
             (double)op2 / op1 - result < 10e-6)) {
            possible = true;
        }
        std::cout << (possible ? "Possible" : "Impossible")  << std::endl;
    }
    return 0;
}
