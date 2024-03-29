/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
  
    
    int guessNumber(int n) {
     int low=1,high=n;
        
     while(true)
     {
        int mid=low+(high-low)/2;
         
        int res=guess(mid);
         
         if(res==0)
         {
             n=mid;
             break;
         }
         
         if(res==-1)
         {
             high=mid;
         }
         else
         {
             low=mid;
         }
         
     }
        
    return n;
    }
};