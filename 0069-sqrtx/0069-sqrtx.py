class Solution:
    def mySqrt(self, x: int) -> int:
        if (x < 2):
            return x
        
        low = 2
        high = x // 2
        mid = 0

        while (low <= high):
            mid = low + (high - low) // 2

            s = mid * mid

            if (s == x):
                return mid

            elif (s >= x):
                high = mid - 1

            else:
                low = low + 1

        return high 
        