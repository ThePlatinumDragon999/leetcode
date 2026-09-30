class Solution {
public:
    bool isPalindrome(string s) {
        std::regex pattern(R"([^a-zA-Z0-9])");

        std::string clean = std::regex_replace(s, pattern, "");

        std::transform(clean.begin(), clean.end(), clean.begin(), [](unsigned char c) {
            return std::tolower(c);
        });

        size_t n = clean.size();
        for (int i = 0; i < n/2; ++i) {
            if (clean[i] != clean[n - 1 - i]) {
                return false;
            }
        }

        return true;
    }
};