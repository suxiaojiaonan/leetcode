//Merge two sorted linked lists and return it as a new list. The new list should be made by splicing together the nodes of the first two lists.

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
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        if(l1 == NULL) return l2;
        if(l2 == NULL) return l1;
        
        ListNode *new_head, *cur;
        if(l1->val < l2->val) {
            new_head = l1;
            l1 = l1->next;
        } else  {
            new_head = l2;
            l2 = l2->next;
        }
        
        cur = new_head;
        
        while(l1 != NULL && l2 != NULL) {
            if(l1->val < l2->val) {
                cur->next = l1;
                cur = l1;
                l1 = l1->next;
            } else {
                cur->next = l2;
                cur = l2;
                l2 = l2->next;
            }
        }
        
        if(l1 == NULL) {
            cur->next = l2;
        } else {
            cur->next = l1;
        }
        
        return new_head;
        
    }
};
