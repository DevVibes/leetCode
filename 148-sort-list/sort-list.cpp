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

ListNode* findmid(ListNode* head)
{
    if(head == nullptr || head->next == nullptr)
            return head;
    ListNode* slow = head;
    ListNode* fast = head->next;
    while(fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

    return slow;
}

ListNode* merge(ListNode* left, ListNode* right)
{
    ListNode* dummy = new ListNode(-1);
    ListNode* temp = dummy;

    while(left && right)
    {
        if(left->val < right->val)
        {
            temp->next = left;
            temp = left;
            left = left->next;
        }
        else
        {
            temp->next = right;
            temp = right;
            right=right->next;
        }
    }
    if(left) temp->next =left;
    else temp->next = right;

    return dummy->next;

}

class Solution {
public:
    ListNode* sortList(ListNode* head) {
       
        if(head == nullptr || head->next == nullptr)
            return head;

        ListNode* left = head;
        ListNode* middle = findmid(head);
        ListNode* right = middle->next;

        middle->next = nullptr;

        left = sortList(left);
        right = sortList(right);

        return merge(left,right);

    }
    
};