//https://www.geeksforgeeks.org/smallest-number-least-n-trailing-zeroes-factorial/
class Solution {
public:
 
        
        int trailingZeroes(int n)
        {
          int temp=n;
          int count=0,f=5;
        
         while(f<=temp)
         {
             count+=temp/f;
             f=f*5;
         }
           
        return count;
        }
};