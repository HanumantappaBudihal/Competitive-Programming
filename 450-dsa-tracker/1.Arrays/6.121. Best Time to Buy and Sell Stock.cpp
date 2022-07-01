class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minValue=INT_MAX;
        int overallProfit=0;
        int profit=0;
        
        for(int i=0;i<prices.size();i++)
        {
              if(prices[i]< minValue)
                minValue=prices[i];
              
              profit=prices[i]-minValue;
              
              if(profit>overallProfit)
                  overallProfit=profit;
        }     
         
        return overallProfit;
    }
};