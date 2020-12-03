// Problem Link: https://leetcode.com/problems/linked-list-random-node/

#include <iostream>
#include <vector>

using namespace std;

struct ListNode {
    ListNode* next;
    int val;
};

class Solution {
    vector<ListNode*> list_nodes;

    void BuildNodesList(ListNode* head) {
        ListNode* temp = head;
        while (temp != NULL) {
            list_nodes.push_back(temp);
            temp = temp->next;
        }
    }

   public:
    /** @param head The linked list's head.
        Note that the head is guaranteed to be not null, so it contains at least one node. */
    Solution(ListNode* head) {
        BuildNodesList(head);
    }

    /** Returns a random node's value. */
    int getRandom() {
        const int nodes_len = list_nodes.size();
        int random_node_idx = rand() % nodes_len;
        return list_nodes[random_node_idx]->val;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */

int main() {
}
