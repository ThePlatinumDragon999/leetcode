class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        currentWrite = 0

        for currentRead in range(len(nums)):
            if nums[currentRead] != val:
                nums[currentWrite] = nums[currentRead]
                currentWrite += 1
        
        return currentWrite
        