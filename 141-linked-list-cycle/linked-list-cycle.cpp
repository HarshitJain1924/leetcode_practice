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
    bool hasCycle(ListNode *HEAD) {
        ListNode *slow=HEAD;
        ListNode *fast=HEAD;

        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;


            if(slow == fast){
                return true;
            }
        }
        return false;
    }
};