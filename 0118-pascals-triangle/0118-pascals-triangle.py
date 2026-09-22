class Solution:
    def generate(self, numRows: int) -> list[list[int]]:
        sol = [[1]]

        if numRows == 1:
            return sol
        
        for i in range(1, numRows):
            currentRow = [1] * (i + 1)
            for j in range(1, i):
                currentRow[j] = sol[i - 1][j - 1] + sol[i - 1][j]
            
            sol.append(currentRow)
        
        return sol

        