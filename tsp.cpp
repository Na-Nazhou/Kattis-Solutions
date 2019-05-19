#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<double> coordX(n);
    std::vector<double> coordY(n);
    for (int i = 0; i < n; i++) {
        double x, y;
        std::cin >> x >> y;
        coordX.push_back(x);
        coordY.push_back(y);
    }
    std::vector<int> tour(n);
    std::vector<bool> used(n);
    tour[0] = 0;
    used[0] = true;
    for (int i = 1; i < n; i++) {
        int best = -1;
        for (int j = 0; j < n; j++) {
            if (!used[j] && (best = -1 || 
                        dist(tour[i - 1], j) < dist(tour[i - 1], best)) {
                    best = j;
            }
        }
        tour[i] = best;
        used[best] = true;
    }
    std::cout <<  << std::endl;
    return 0;
}
