#include <iostream>
#include <algorithm>
#include <vector>

//TODO
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
    sort(prob.begin(), prob.end(), compare);
    long double expected = 0;
    int attempts = 1;
    for (std::vector<long double>::iterator it = prob.begin(); 
            it != prob.end(); it++) {
        expected += (long double)attempts * (*it);
        attempts++;
    }
    std::cout << expected << std::endl;
    return 0;
}
