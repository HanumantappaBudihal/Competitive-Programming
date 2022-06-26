class Solution {
public:
    bool isPalindrome(int x) {
      
     int input=x;
     long reverseNumber=0;
     while(x>0)
     {
         reverseNumber=(reverseNumber*10)+(x%10);
         x=x/10;
         cout<<x<<" ";        
    }
    
        if(input!=reverseNumber)
            return false;
        cout<<input<< " "<<reverseNumber;
        return true;
    }
};