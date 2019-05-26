#include <iostream>
#include <unordered_set> 
#include <string>

struct node {
    int n;
    node* left = nullptr;
    node* right = nullptr;

};

std::string traverse(node *root, int level) {
    if (root == nullptr) {
        return "";

    }
    std::string route = "";
    route += traverse(root->left, level + 1);
    route += std::to_string(level);
    route += traverse(root->right, level + 1);
    return route;

}

node* insert(node *root, int n) {
    if (root == nullptr) {
        node *temp = new node;
        temp->n = n;
        root = temp;
        return root;

    } else if (root->n <= n) {
        root->right = insert(root->right, n);
        return root;

    } else {
        root->left = insert(root->left, n);
        return root;

    }

}

int main() {
    int n, k; 
    std::cin >> n >> k;
    std::unordered_set<std::string> set;
    for (int i = 0; i < n; i++) {
        node* root = nullptr;
        for (int j = 0; j < k; j++) {
            int val;
            std::cin >> val;
            root = insert(root, val);

        }
        std::string route = traverse(root, 0);
        set.insert(route);

    }
    std::cout << set.size() << std::endl;
    return 0;

}
