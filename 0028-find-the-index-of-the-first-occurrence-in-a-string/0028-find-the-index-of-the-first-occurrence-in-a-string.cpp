class Solution {
public:
    int strStr(string haystack, string needle) {
        size_t hayLen = haystack.size();
        size_t needleLen = needle.size();

        if (needleLen > hayLen) {
            return -1;
        }

        // Create prefix array
        vector<unsigned int> lps(needleLen);

        lps[0] = 0;
        size_t i = 1;
        size_t length = 0;

        while (i < needleLen) {
            if (needle[i] == needle[length]) {
                ++length;
                lps[i] = length;
                ++i;
            }

            else if (length > 0) {
                length = lps[length - 1];
            }

            else {
                lps[i] = 0;
                ++i;
            }
        }

        // i goes through haystack
        // j goes through needle
        i = 0;
        int j = 0;

        while (i < hayLen) {
            if (haystack[i] == needle[j]) {
                ++i;
                ++j;

                if (j == needleLen) {
                    return i - j;
                }
            }

            else if (j != 0) {
                j = lps[j - 1];
            }

            else {
                ++i;
            }
        }

        return -1;
    }
};