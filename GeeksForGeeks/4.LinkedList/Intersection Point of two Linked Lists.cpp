int intersectPoint(Node* head1, Node* head2)
{
    int n1=0,n2=0;
    
    Node* temp=head1;
    
    while(temp)
    {
        n1++;
        temp=temp->next;
    }
    
   temp=head2;
    
    while(temp)
    {
        n2++;
        temp=temp->next;
    }
    
    if(n1>n2)
    {
        int d=n1-n2;
        
        for(;d>0;d--)
        {
            head1=head1->next;
        }
    }
    else
    {
        int d=n2-n1;
        
        for(;d>0;d--)
        {
            head2=head2->next;
        } 
    }
    
    while(head1!=NULL)
    {
        if(head1==head2)
             return head1->data;
             
        head1=head1->next;
        head2=head2->next;
    }
    
    return -1;
}