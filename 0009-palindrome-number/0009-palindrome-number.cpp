class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }

        std::string intString = std::to_string(x);
        for (int i = 0; i < intString.length() / 2; ++i) {
            if (intString[i] != intString[intString.length() - 1 - i]) {
                return false;
            }
        }

        return true;
    }
};