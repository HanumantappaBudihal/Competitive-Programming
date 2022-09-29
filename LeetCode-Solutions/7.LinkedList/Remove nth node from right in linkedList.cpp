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
        if(n==1 && head->next==NULL) return NULL;        
        ListNode* temp=head;
        ListNode* prev;
        
        int total_length=0;
        
        while(temp)
        {
            temp=temp->next;
            total_length++;            
        }
        
        temp=head;
        int k;
        k=total_length-n;
        
        if(k==0)
        {
            head=head->next;
            return head;
        }
        
        while(k)
        {
            prev=temp;
            temp=temp->next;  
            k--;
      
        }
        
      
        prev->next=temp->next;
        
        return head;        
    }
};