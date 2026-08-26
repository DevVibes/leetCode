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
    bool hasCycle(ListNode *head) {
        if(head == NULL || head->next == NULL )
            return false;

        set<ListNode*> visited;

        ListNode* temp = head;

        while(temp)
        {
            auto failed = visited.insert(temp);
            if(!failed.second)
            {
                return true;
                
            }
            temp = temp->next;

        }
        return false;
    }
    
};