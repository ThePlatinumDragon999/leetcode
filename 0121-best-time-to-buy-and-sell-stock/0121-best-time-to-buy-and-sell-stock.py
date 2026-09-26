class Solution:
    def maxProfit(self, prices: list[int]) -> int:
        lowestPriceSoFar = prices[0]
        currentProfit = 0
        maxProfit = 0

        for i in range(len(prices) - 1):
            currentPrice = prices[i+1]
            currentProfit = currentPrice - lowestPriceSoFar
            lowestPriceSoFar = min(lowestPriceSoFar, currentPrice)

            if (currentProfit > maxProfit):
                maxProfit = currentProfit
        
        return maxProfit
        