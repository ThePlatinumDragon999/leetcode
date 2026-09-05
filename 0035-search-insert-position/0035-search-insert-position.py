class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        right = len(nums)
        left = 0

        while (left < right):
            middle = left + (right - left) // 2

            if (nums[middle] < target):
                left = middle + 1
            else:
                right = middle
        
        return left
        