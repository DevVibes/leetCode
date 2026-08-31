/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next == nullptr )
            return nullptr;
        

        ListNode* temp = head;
        int len =0;

        while(temp)
            {
                len++;
                temp = temp->next;
            }
        int todelete = len - n;

        temp = head;
        if(len == n)
            {
                ListNode* new_head = head;
                head = head ->next;
                delete new_head;
                return head;
            }


        while(temp)
        {
            todelete--;
            if(todelete==0)
                break;
            temp = temp->next;
        }
        
        ListNode* delNode = temp->next;
        temp->next = temp->next->next;
        delete delNode;
                
        return head;
    }
};