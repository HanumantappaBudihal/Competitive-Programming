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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        ListNode* curr=head;
        
        int N=0;
        while(curr!=NULL)
        {
            curr=curr->next;
            N++;
        }
        
        int width=N/k;
        int rem=N%k;
        
        curr=head;
        vector<ListNode*> ans(k);
        
        for(int i=0;i<k;i++)
        {
            ListNode* root=curr;
                
            for(int j=0;j<width+(i<rem?1:0)-1;++j)
            {
                if(curr!=NULL) curr=curr->next;
            }
            
            if(curr!=NULL)
            {
                  ListNode* prev = curr;
                curr = curr->next;
                prev->next = NULL;
            }
            
            ans[i]=root;
        }
        
        return ans;
            
    }
};