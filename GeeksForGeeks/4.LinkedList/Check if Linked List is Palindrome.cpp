//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




// } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
  public:
    //Function to check whether the list is palindrome.
    Node* reverse(Node * head)
    {
        Node* prev=NULL;
        Node* next;
        
        while(head)
        {
            next=head->next;
            head->next=prev;
            
            prev=head;
            head=next;
        }
        
        return prev;
    }
    bool isPalindrome(Node *head)
    {
        if(head->next==NULL) return true;
        Node* slow=head;
        Node* fast=head;
        Node* prev=NULL;
        
        while(fast!=NULL && fast->next!=NULL )
        {
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        
        prev->next=NULL;
        Node* second=reverse(slow);
        
        //while(second)
       // {
        //    cout<<second->data <<" "; 
        //    second=second->next;
       // }
        
        while(head!=NULL && second!=NULL)
        {
            if(head->data!=second->data)
                return false;
                
            head=head->next;
            second=second->next;
        }
        
        return true;
        
    }
};



//{ Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}


// } Driver Code Ends