#include <iostream>
#include <set>

int main() {
    int n;
    std::cin >> n;
    std::map<int, int>> map;
    for (int i = 0; i < n; i++) {
        int start, end;
        std::cin >> start >> end;
        auto lower = map.lower_bound(start);
        auto upper = map.upper_bound(start);
        if (lower != map.end() && lower->first + lower->second >= start) 
