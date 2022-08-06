#include<map>
Node* findIntersection(Node* head1, Node* head2)
{
    map<int,int> mp;
    Node* newHead=NULL;
    
    while(head1)
    {
        auto item=mp.find(head1->data);
        if(item!=mp.end())
        {
            item->second+=1;
        }
        else
        {
            mp.insert(pair<int,int>(head1->data,1));
        }
        head1=head1->next;
    }
    
    Node* prev=NULL;
    while(head2!=NULL)
    {
        auto item=mp.find(head2->data);
        if(item!=mp.end())
        {
         if(newHead==NULL)
         { 
             newHead=new Node(head2->data);
             prev=newHead;
         }
         else
         {
             
             head1=new Node(head2->data);
               prev->next=head1;
          prev=head1;
         }
          
        mp.erase(item);
            
        }
        
        head2=head2->next;
    }
    
    
    return newHead;
}
