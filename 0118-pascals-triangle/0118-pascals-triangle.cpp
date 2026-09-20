class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        std::vector<std::vector<int>> solVec = {{1}};

        if (numRows == 1) {
            return solVec;
        }

        for (int i = 1; i < numRows; ++i) {
            vector<int> currentRow(i + 1);
            currentRow[0] = 1;
            currentRow[i] = 1;

            for (int j = 1; j < i; ++j) {
                currentRow[j] = solVec[i - 1][j - 1] + solVec[i - 1][j];
            }

            solVec.push_back(currentRow);
        }

        return solVec;
    }
};