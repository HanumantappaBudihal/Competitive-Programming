class Solution {
public:
    int countOdds(int low, int high) {
        int count=0;
        
        if(low%2==0 and high%2==0)        
            count=(high-low)/2;
        else 
            count=((high-low)/2)+1;
        
        return count;
    }
};