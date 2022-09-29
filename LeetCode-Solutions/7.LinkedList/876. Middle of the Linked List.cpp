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
    ListNode* middleNode(ListNode* head) {
        ListNode *slow=head,*fast=head->next;
        
        if(!head->next)
            return head;
        
        if(!head->next->next)
            return head->next;
        
        while (fast->next && fast->next->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        
        return slow->next;
    }
};