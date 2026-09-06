class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.size() - 1;

        int wordSize = 0;

        // First loop for ending whitespace
        while (i >= 0 && s[i] == ' ') {
            --i;
        }

        while (i >= 0 && s[i] != ' ') {
            ++wordSize;
            --i;
        }

        return wordSize;
    }
};