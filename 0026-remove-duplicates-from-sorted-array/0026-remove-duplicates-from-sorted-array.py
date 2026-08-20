class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        writeIndex = 1

        curElement = nums[0]

        for readIndex in range(1, len(nums)):
            if nums[readIndex] != curElement:
                curElement = nums[readIndex]
                nums[writeIndex] = curElement
                writeIndex += 1
            
        return writeIndex

        