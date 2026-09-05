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

        

        // finding lengths
        int n1=0, n2=0;
        while(l1)
        {
            l1=l1->next;
            n1++;
        }
        while(l2)
        {
            l2=l2->next;
            n2++;
        }

        l1=headA;
        l2=headB;
        
        int d=abs(n1-n2);
        if(n1<n2 )
            {
                for(int i=0;i<d;i++)
                    l2=l2->next;
            }
        else 
        {
            for(int i=0;i<d;i++) 
                l1=l1->next;
        }

      

        while(l1 && l2)
            {
                if(l1==l2)  
                    return l1;
                l1=l1->next;
                l2=l2->next;
            }
        return nullptr;
    }
};