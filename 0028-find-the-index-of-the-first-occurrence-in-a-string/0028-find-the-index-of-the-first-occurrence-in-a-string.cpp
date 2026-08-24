class Solution {
public:
    int strStr(string haystack, string needle) {
        size_t hayLen = haystack.size();
        size_t needleLen = needle.size();

        if (needleLen > hayLen) {
            return -1;
        }

        for (auto i{0uz}; i <= hayLen - needleLen; ++i) {
            for (auto j{0uz}; j < needleLen; ++j) {
                if (haystack[i + j] != needle[j]) {
                    break;
                }

                if (j == needleLen - 1) {
                    return i;
                }
            }
        }

        return -1;
    }
};