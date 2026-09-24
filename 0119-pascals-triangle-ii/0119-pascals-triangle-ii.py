class Solution:
    def getRow(self, rowIndex: int) -> list[int]:
        row = [1] * (rowIndex + 1)

        for i in range(1, rowIndex):
            row[i] = self.binCo(rowIndex, i)
            row[rowIndex - i] = row[i]
        
        return row
    
    def binCo(self, n: int, k: int) -> int:
        total = 1
        for i in range(1, k + 1):
            total = total * (n - k + i) // i
        
        return total
        