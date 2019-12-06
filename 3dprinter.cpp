// You have a single 3D printer, and would like to use it to produce 𝑛 statues. 
// Every day you can choose for each printer in your possession to have it print a statue, 
// or to have it 3D print a new printer (which becomes available for use the next day).
// What is the minimum possible number of days needed to print at least 𝑛 statues?
// The input contains a single integer 𝑛 (1 ≤ 𝑛 ≤ 10000), the number of statues you need to print.

// Solution: print n printers in ceiling(log2(n)) days, print n printers in 1 day 
// Notes: cmath functions (ceil, log2)
// TODO: improve the explanation

#include <iostream>
#include <cmath>

int main() {
    int n; 
    std::cin >> n; 

    std::cout << std::ceil(std::log2(n)) + 1 << std::endl;

    return 0;
}
