/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
//Given a linked list, return the node where the cycle begins. 
//If there is no cycle, return null

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL) {
            return NULL; 
        }
        
        ListNode *one_step = head;
        ListNode *two_step = head;
        while(two_step != NULL && two_step->next != NULL) {
            one_step = one_step->next;
            two_step = two_step->next->next;
            if(one_step == two_step) break;
        }
        
        if(two_step == NULL || two_step->next == NULL) {
            return NULL;
        }
        
        one_step = head;
        while(one_step != two_step) {
            one_step = one_step->next;
            two_step = two_step->next;
        }
        
        return one_step;
        
    }
};
