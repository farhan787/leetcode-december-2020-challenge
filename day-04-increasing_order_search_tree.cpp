// Problem Link: https://leetcode.com/problems/increasing-order-search-tree/

#include <iostream>
#include <vector>

using namespace std;

struct TreeNode {
    TreeNode *left, *right;
    int val;

    TreeNode(int val) {
        this->val = val;
    }
};

void inorder(TreeNode* root, TreeNode*& ans_curr) {
    if (!root) return;
    inorder(root->left, ans_curr);
    ans_curr->right = root;
    ans_curr = root;
    ans_curr->left = NULL;
    inorder(root->right, ans_curr);
}

TreeNode* increasingBST(TreeNode* root) {
    TreeNode* new_root = new TreeNode(INT_MIN);
    TreeNode* ans_curr = new_root;

    inorder(root, ans_curr);
    return new_root->right;
}

int main() {
}
