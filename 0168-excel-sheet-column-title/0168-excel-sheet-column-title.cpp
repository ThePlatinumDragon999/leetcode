class Solution {
public:
    string convertToTitle(int columnNumber) {
        string columnTitle = "";
        while (columnNumber != 0) {
            --columnNumber;
            int remainder = columnNumber % 26;

            char nextLetter = remainder + 'A';
            columnTitle += nextLetter;
            columnNumber /= 26;
        }

        std::reverse(columnTitle.begin(), columnTitle.end());
        return columnTitle;
    }
};