class Solution:
    def climbStairs(self, n: int) -> int:
        if (n < 4):
            return n
        
        previous1 = 3
        previous2 = 2
        sum = 0

        for i in range(4, n + 1):
            sum = previous1 + previous2
            previous2 = previous1
            previous1 = sum
        
        return sum
        