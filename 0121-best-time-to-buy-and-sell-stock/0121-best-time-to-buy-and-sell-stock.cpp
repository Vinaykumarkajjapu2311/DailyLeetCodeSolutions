class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int maxprofit=0;
        int right=prices[n-1];
        for(int i=n-2;i>=0;i--)
        {
            right=max(right,prices[i]);
            maxprofit=max(maxprofit,right-prices[i]);
        }
        return maxprofit;
        
    }
};