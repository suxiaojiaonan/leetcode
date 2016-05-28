// https://leetcode.com/problems/delete-node-in-a-linked-list/
// Delete the given node in a linked list

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        if (node == NULL) return;
        if (node->next)
        {
            node->val = node->next->val;
            node->next = node->next->next;
        }
        else
        {
            node = NULL;
        }
    }
};