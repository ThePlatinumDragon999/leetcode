class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        hayLen = len(haystack)
        needleLen = len(needle)

        if (hayLen < needleLen):
            return -1
        
        # Set up the LPS array
        lps_array = [0] * needleLen
        lps_array[0] = 0
        index = 1
        length = 0

        while index < needleLen:
            if needle[index] == needle[length]:
                length += 1
                lps_array[index] = length
                index += 1
            
            elif length > 0:
                length = lps_array[length - 1]
            
            else:
                lps_array[index] = 0
                index += 1
        
        # i is for the haystack, j is for needle
        i = 0
        j = 0

        while i < hayLen:
            if haystack[i] == needle[j]:
                i += 1
                j += 1

                if j == needleLen:
                    return i - j
            
            elif j > 0:
                j = lps_array[j - 1]
            
            else:
                i += 1
        
        return -1
