#include <iostream>
#include <vector>
#include <cmath>

int dist(int from, int to, std::vector<double> x, std::vector<double> y) {
    double dispX = x[from] - x[to];
    double dispY = y[from] - y[to];
    return std::round(std::sqrt(dispX * dispX + dispY * dispY));
}

int main() {
    int n;
    std::cin >> n;
    std::vector<double> coordX;
    std::vector<double> coordY;
    for (int i = 0; i < n; i++) {
        double x, y;
        std::cin >> x >> y;
        coordX.push_back(x);
        coordY.push_back(y);
    }
    std::vector<int> tour;
    std::vector<bool> used;
    for (int i = 0; i < n; i++) {
        tour.push_back(-1);
        used.push_back(false);
    }
    tour[0] = 0;
    used[0] = true;
    for (int i = 1; i < n; i++) {
        int best = -1;
        for (int j = 0; j < n; j++) {
            if (!used[j] && (best == -1 || 
                dist(tour[i - 1], j, coordX, coordY) < 
                dist(tour[i - 1], best, coordX, coordY))) {
                best = j;
            }
        }
        tour[i] = best;
        used[best] = true;
    }
    for (auto i = 0; i < n; i++) {
        std::cout << tour[i] << std::endl;
    }
    return 0;
}
