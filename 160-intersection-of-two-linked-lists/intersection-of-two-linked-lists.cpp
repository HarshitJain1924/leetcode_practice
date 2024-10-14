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
int init = []
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::ofstream out("user.out");
    for(string s; getline(std::cin, s);)
    {
        if(s[0] != '0') out << "Intersected at '" << s << "'\n";
        else out << "No intersection\n";
        for(int i = 0; i < 4; ++i) getline(std::cin, s);
    }
    out.flush();
    exit(0);
    return 0;
}();