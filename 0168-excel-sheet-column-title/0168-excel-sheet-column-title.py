class Solution:
    def convertToTitle(self, columnNumber: int) -> str:
        columnTitle = ""
        while columnNumber != 0:
            columnNumber -= 1
            remainder = columnNumber % 26
            curLetter = chr(remainder + ord('A'))
            columnTitle += curLetter
            columnNumber //= 26

        return columnTitle[::-1]
        