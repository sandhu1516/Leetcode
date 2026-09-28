class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int buyMin = INT_MAX;
        int maxprofit = 0;

        for(int i=0;i<n;i++){
            buyMin = min(buyMin, prices[i]);
            int profit = prices[i] - buyMin;
            maxprofit = max(maxprofit, profit);
        }
        return maxprofit;
    }
};
