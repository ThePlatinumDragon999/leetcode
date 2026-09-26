class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lowestPriceSoFar = prices[0];
        int currentProfit = 0;
        int maxProfit = 0;

        for (int i = 0; i < prices.size() - 1; ++i) {
            currentProfit = prices[i+1] - lowestPriceSoFar;
            lowestPriceSoFar = min(lowestPriceSoFar, prices[i+1]);

            if (currentProfit > maxProfit) {
                maxProfit = currentProfit;
            }
        }

        return maxProfit;
    }
};