// Problem Link: https://leetcode.com/problems/populating-next-right-pointers-in-each-node-ii/

#include <iostream>
#include <queue>

using namespace std;

struct Node {
    Node *left, *right, *next;
    int val;
};

Node* connect(Node* root) {
    if (!root) return root;

    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    Node* prev_left_node = NULL;
    while (!q.empty()) {
        Node* front = q.front();
        q.pop();

        if (front == NULL) {
            if (!q.empty()) q.push(NULL);
            prev_left_node = NULL;
            continue;
        }
        if (prev_left_node) {
            prev_left_node->next = front;
        }
        prev_left_node = front;
        if (front->left) q.push(front->left);
        if (front->right) q.push(front->right);
    }
    return root;
}

int main() {
}
