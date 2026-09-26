class Solution:
    def maxProfit(self, prices: list[int]) -> int:
        lowestPriceSoFar = prices[0]
        currentProfit = 0
        maxProfit = 0

        for i in range(0, len(prices) - 1):
            currentProfit = prices[i+1] - lowestPriceSoFar
            lowestPriceSoFar = min(lowestPriceSoFar, prices[i+1])

            if (currentProfit > maxProfit):
                maxProfit = currentProfit
        
        return maxProfit
        