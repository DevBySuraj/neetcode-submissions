class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_stock = INT_MAX;
        int profit = 0;
        int ans = 0;

        for(int i =0; i<prices.size(); i++){
            min_stock = min(min_stock, prices[i]);
            profit = prices[i] - min_stock;
            ans = max(ans, profit);
        }
        return ans;
    }
};
