class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        minLength = len(strs[0])
        for s in strs:
            if len(s) < minLength:
                minLength = len(s)
        
        retString = ""

        for j in range(minLength):
            curChar = strs[0][j]

            for i in range(1, len(strs)):
                if strs[i][j] != curChar:
                    return retString
            
            retString += curChar
        
        return retString