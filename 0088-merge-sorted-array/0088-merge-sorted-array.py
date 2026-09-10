class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        writePointer = m + n - 1
        i = m - 1
        j = n - 1

        while (i >= 0 and j >= 0):
            firstArrPointer = nums1[i]
            secondArrPointer = nums2[j]

            if (firstArrPointer >= secondArrPointer):
                nums1[writePointer] = firstArrPointer
                writePointer -= 1
                i -= 1
            else:
                nums1[writePointer] = secondArrPointer
                writePointer -= 1
                j -= 1
        
        if (i < 0):
            while (j >= 0):
                nums1[writePointer] = nums2[j]
                writePointer -= 1
                j -= 1