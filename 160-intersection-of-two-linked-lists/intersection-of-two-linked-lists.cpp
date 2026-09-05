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
        ListNode* l1 = headA;
        ListNode* l2 = headB;

        unordered_map<ListNode*,int> mp;

        while(l1)
        {
            mp[l1]++;
            l1=l1->next;
        }

        while(l2)
        {
            if(mp[l2]==1)
                return l2;
            l2=l2->next;
        }
        return nullptr;
    }
};