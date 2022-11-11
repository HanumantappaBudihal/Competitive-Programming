//My solution :

public:
  
    bool is_jumping_num(long long number)
    {
        int first_number=number%10;
        number=number/10;
        
        while(number>0)
            {
                int second=number%10;
                number=number/10;
                //cout<<abs(first_number-second)<<" ";
                
                if((abs(first_number-second)!=1)) return false;
                
                first_number=second;
            }
            
        return true;    
    }
    
    long long jumpingNums(long long X) {
        
        for(long long i=X;i>0;i--)
        {
            if(is_jumping_num(i))
                return i;
        }
        
        return -1;
    }


// Above code is giving the TLDT


 queue<long long>q;
       long long ans=0;
       for(int i=1;i<10;i++)q.push(i);
       
       while(!q.empty()){
           auto top=q.front();
           q.pop();
           if(top>X)continue;
           
           ans=max(ans,top);
           
           int last=top%10;
           
           long long num1=top*10+(last-1);
           long long num2=top*10+(last+1);
           
           if(last!=0)
           q.push(num1);
           if(last!=9)
           q.push(num2);           
       }
        return ans;