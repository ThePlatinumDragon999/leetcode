class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        size_t minLength = strs[0].size();
        for (const string& s : strs) {
            if (s.size() < minLength) {
                minLength = s.size();
            }
        }

        string retString = "";

        for (int j = 0; j < minLength; ++j) {
            char curChar = strs[0][j];

            for (int i = 1; i < strs.size(); ++i) {
                if (strs[i][j] != curChar) {
                    return retString;
                }
            }

            retString += curChar;
        }

        return retString;
    }
};