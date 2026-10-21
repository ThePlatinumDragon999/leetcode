class Solution {
public:
    int titleToNumber(string columnTitle) {
        long long num = 0;
        size_t colLen = columnTitle.size();
        for (size_t i = 0; i < colLen; ++i) {
            num = num * 26 + columnTitle[i] - '@';
        }

        return num;
        
    }
};