
//Given a sorted linked list, delete all duplicates such that each element appear only once.

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
    ListNode *deleteDuplicates(ListNode *head) {
        if(head == NULL) return head;
        if(head->next == NULL) return head;
        ListNode *tmp_head;
        ListNode *next_node;
        tmp_head= head;
        while(tmp_head != NULL) {
            next_node = tmp_head->next;
            while(next_node != NULL && tmp_head->val == next_node->val) {
                delete(tmp_head->next);
                tmp_head->next = next_node->next;
                next_node = next_node->next;
            }
            tmp_head = next_node;
        }
        return head;
    }
};
