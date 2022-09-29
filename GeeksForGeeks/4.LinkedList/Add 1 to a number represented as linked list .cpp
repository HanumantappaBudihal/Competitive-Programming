// { Driver Code Starts
//Initial template for C++

//Best approach 


#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data; 
        node = node->next; 
    }  
    cout<<"\n";
} 


 // } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    
    public:
    Node* addOne(Node *head) 
    {
        vector<int> numbers;
        
        
        while(head)
        {
            numbers.push_back(head->data);
            head=head->next;
        }
    
        reverse(numbers.begin(),numbers.end());
      
        int carry=1;
        for(int i=0;i<numbers.size();i++)
        {
            
            numbers[i]+=carry;
            if(numbers[i]==10)
            {
               carry=1; 
               numbers[i]=0;
            }
            else
            {
                carry=0;
            }
        }
        
        if(carry==1)
        {
            numbers.push_back(carry);
        }
         
        reverse(numbers.begin(),numbers.end());
       
        int i=0;
        Node* newHead=new Node(numbers[0]);
        head=newHead;
        
        for(int i=1;i<numbers.size();i++)
        {
            newHead->next=new Node(numbers[i]);
            newHead=newHead->next;
        }
        
       return head;
    }
};

// { Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 
  // } Driver Code Ends


  //