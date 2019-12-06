// Output the percentage of grades above the average grade 

// Notes: specify precision (std::setiosflags(std::ios::fixed), std::setprecision(3))

#include <iostream>
#include <vector>
#include <iomanip>

int main() {
    int N; 
    std::cin >> N;
    while (N--) {
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
        double average = (double)sum / n;
        int count = 0;
        for (int grade : grades) {
            if (grade - average > 10E-6) {
                count++;
            }
        }
        double percentage = (double)count / n * 100;
        std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(3) << percentage << "%" << std::endl;
    }
    return 0;
}
