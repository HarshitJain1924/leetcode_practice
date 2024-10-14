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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp=headA;
        unordered_map<ListNode*,int> mp;
        while(temp!=NULL){
            mp[temp]++;
            temp=temp->next;
        }
        temp=headB;
        ListNode* ans=NULL;
        while(temp!=NULL){
            mp[temp]++;
            if(mp[temp]==2){
                ans=temp;
                break;
            }
            temp=temp->next;
        }
        return ans;
    }
};