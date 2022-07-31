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
    ListNode* reverse(ListNode* head)
    {
        ListNode* prev=NULL;
        ListNode* next=NULL;
        
        while(head)
        {
            next=head->next;
            head->next=prev;
            
            prev=head;
            head=next;
        }
        
        return prev;
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        //l1=reverse(l1);
        //l2=reverse(l2);
        int carry=0;
        
        ListNode* ans=NULL;
            ListNode* prev=NULL;
        
        while(l1!=NULL || l2!=NULL)
        {
            int n1=0,n2=0;
            if(l1)
            {
                n1=l1->val;
                l1=l1->next;
            }
            
            if(l2)
            {
                n2=l2->val;
                l2=l2->next;
            }
            
            int sum=n1+n2+carry;
            
            carry=sum/10;
            sum=sum%10;
            
            ListNode* newNode=new ListNode(sum);
            
            if(ans==NULL)
                ans=newNode;
            else
                prev->next=newNode;
            
            prev=newNode;
        }
        
        if(carry>0)
        {
            prev->next=new ListNode(carry);
        }
        
        return ans;
    }
};