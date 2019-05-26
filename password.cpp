#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>

bool compare(long double a, long double b) {
    return a - b > 10e-8;
}

int main() {
    int N; 
    std::cin >> N;
    std::vector<long double> prob;
    for (int i = 0; i < N; i++) {
        std::string password;
        long double p;
        std::cin >> password >> p;
        prob.push_back(p);
    }
    std::sort(prob.begin(), prob.end(), compare);
    long double expected = 0;
    int attempts = 1;
    for (auto it = prob.begin(); it != prob.end(); it++) {
        expected += (long double)attempts * (*it);
        attempts++;
    }
    std::cout << std::setiosflags(std::ios::fixed) << 
        std::setprecision(6) << expected << std::endl;
    return 0;
}
