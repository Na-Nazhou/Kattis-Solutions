#include <iostream>
#include <stack>
#include <queue>

int main() {
    int n;
    while (std::cin >> n) {
        std::stack<int> stack;
        std::queue<int> queue;
        std::priority_queue<int> pq;
        bool isStack = true;
        bool isQueue = true;
        bool isPQ = true;
        for (int i = 0; i < n; i++) {
            int command;
            std::cin >> command;
            if (command == 1) {
                int val;
                std::cin >> val;
                stack.push(val);
                queue.push(val);
                pq.push(val);
            } else {
                int result;
                std::cin >> result;
                if (stack.empty() || stack.top() != result) {
                    isStack = false;
                } else {
                    stack.pop();
                }
                if (queue.empty() || queue.front() != result) {
                    isQueue = false;
                } else {
                    queue.pop();
                }
                if (pq.empty() || pq.top() != result) {
                    isPQ = false;
                } else {
                    pq.pop();
                }
            }
        }
        int count = 0;
        if (isStack) count++;
        if (isQueue) count++;
        if (isPQ) count++;
        if (count == 0) {
            std::cout << "impossible" << std::endl;
            continue;
        } else if (count > 1) {
            std::cout << "not sure" << std::endl;
            continue;
        }
        if (isStack) {
            std::cout << "stack" << std::endl;
        } else if (isQueue) {
            std::cout << "queue" << std::endl;
        } else {
            std::cout << "priority queue" << std::endl;
        }
    }
    return 0;
}


