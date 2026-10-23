class Solution:
    def titleToNumber(self, columnTitle: str) -> int:
        num = 0
        for i in columnTitle:
            num = num * 26 + ord(i) - ord('@')
        
        return num
        