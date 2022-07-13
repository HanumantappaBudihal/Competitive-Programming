class Solution {
public:
    long long getNewNumber(long long n)
    {
        int res=0;
        while(n >0)
        {
            
            res=res+pow(n%10,2);
            n=n/10;
        }
        
        return res;
        
    }
    
    bool isHappy(int n) {      
      
        
        while(n!=1)
        {
         
            long long newNumber=getNewNumber(n);
            
            if(newNumber==7)
                newNumber=getNewNumber(newNumber);
            
            if(newNumber <10 and newNumber!=1)
                return false;
            n=newNumber;
        }
        
        return true;
    }
};
