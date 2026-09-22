class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> row(rowIndex + 1);
        row[0] = 1;
        row[rowIndex] = 1;

        int middle = rowIndex / 2;

        for (int i = 1; i <= middle; ++i) {
            row[i] = binCo(rowIndex, i);
            row[rowIndex - i] = row[i];
        }

        return row;
    }
private:
    long long binCo(int n, int k) {
        long long result = 1;

        for (int i = 1; i <= k; ++i) {
            result = result * (n - k + i) / i;
        }

        return result;
    }
};