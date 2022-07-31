//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    
    Node* reverse(Node* head)
    {
        Node* next=NULL;
        Node* prev=NULL;
        
        while(head)
        {
            next=head->next;
            head->next=prev;
            
            prev=head;
            head=next;
        }
        
        return prev;
    }
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
      Node* ans=NULL;
      Node* prev=NULL;
      
      int carry=0;
      
      first=reverse(first);
      second=reverse(second);
     
     //print the reverse linked list
    //  Node* temp=second;
    //  while(temp)
    //  {
    //      cout<<temp->data<<" ";
    //      temp=temp->next;
    //  }
      
      while(first!=NULL || second!=NULL)
      {
          int n1=0;
          int n2=0;
          
          if(first)
          {
                n1=first->data;
                first=first->next;
          }
          
          if(second)
          {
              n2=second->data;
              second=second->next;
          }
          
          int sum= (n1+n2+carry);
          int n3=sum%10;
          carry=sum/10;
          
          Node* newNode=new Node(n3);
          
          if(ans==NULL)
            ans=newNode;
          else
            prev->next=newNode;
            
         prev=newNode;
      }
     
       if(carry> 0)
       {
           prev->next=new Node(carry);
       }
      
      return reverse(ans);
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends