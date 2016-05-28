//Given a linked list, swap every two adjacent nodes and return its head.

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
    ListNode *swapPairs(ListNode *head) {
        if(head == NULL) return NULL;
        if(head->next == NULL) return head;
        ListNode *tmp_head = head;
        ListNode *tmp_next = head->next;
        ListNode *tmp;
        
        tmp_head->next = tmp_next->next;
        tmp_next->next = tmp_head;
        head = tmp_next;
        tmp = tmp_head;
        tmp_head = tmp_head->next;
        
        while(tmp_head != NULL) {
            if(tmp_head->next != NULL) {
                tmp_next = tmp_head->next;
                tmp_head->next = tmp_next->next;
                tmp_next->next = tmp_head;
                tmp->next = tmp_next;
            }
            tmp = tmp_head;
            tmp_head = tmp_head->next;
        }
        
        return head;
        
    }
};
