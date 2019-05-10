#include <iostream>
#include <string>

int main() {
    int op1, op2, result;
    std::string sign1, sign2("=");
    std::cin >> op1 >> op2 >> result;
    if (op1 + op2 == result) {
        sign1 = "+";
    } else if (op2 + result == op1) {
        sign1 = "=";
        sign2 = "+";
    } else if (op1 * op2 == result) {
        sign1 = "*";
    } else if (op2 * result == op1) {
        sign1 = "=";
        sign2 = "*";
    } else if (op1 - op2 == result) {
        sign1 = "-";
    } else if (op2 - result == op1) {
        sign1 = "=";
        sign2 = "-";
    } else if ((double)op1 / op2 - result > -10e-6 &&
            (double)op1 / op2 - result < 10e-6) {
        sign1 = "/";
    } else if ((double)op2 / result - op1 > -10e-6 &&
            (double)op2 / result - op1 < 10e-6) {
        sign1 = "=";
        sign2 = "/";
    }
    std::cout << op1 << sign1 << op2 << sign2 << result << std::endl;
    return 0;
}
