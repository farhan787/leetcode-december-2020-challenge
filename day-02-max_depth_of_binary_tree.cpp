// Problem link: https://leetcode.com/problems/maximum-depth-of-binary-tree/

#include <iostream>
using namespace std;

struct TreeNode {
    TreeNode *left, *right;
    int val;
};

void dfs(TreeNode* root, int level, int& max_depth) {
    if (!root) return;
    max_depth = max(max_depth, level);
    dfs(root->left, level + 1, max_depth);
    dfs(root->right, level + 1, max_depth);
}

int maxDepth(TreeNode* root) {
    int max_depth = 0;
    dfs(root, 1, max_depth);
    return max_depth;
}

int main() {
}
