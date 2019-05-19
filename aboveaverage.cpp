#include <iostream>
#include <vector>
#include <iomanip>

int main() {
    int N; 
    std::cin >> N;
    while (N > 0) {
        int n;
        std::cin >> n;
        std::vector<int> grades;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            int grade;
            std::cin >> grade;
            grades.push_back(grade);
            sum += grade;
        }
        double average = (double)sum / (double)n;
        int count = 0;
        for (auto i : grades) {
            if (i - average > 10E-6) {
                count++;
            }
        }

        double percentage = (double)count / (double)n * 100;
        std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(3) << percentage << "%" << std::endl;
        N--;
    }
    return 0;
}
