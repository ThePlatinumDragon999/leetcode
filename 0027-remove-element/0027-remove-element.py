class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        currentWrite = 0
        currentRead = 0

        while currentRead < len(nums):
            if (nums[currentRead] == val):
                currentRead += 1
            else:
                nums[currentWrite] = nums[currentRead]
                currentRead += 1
                currentWrite += 1
        
        return currentWrite
        