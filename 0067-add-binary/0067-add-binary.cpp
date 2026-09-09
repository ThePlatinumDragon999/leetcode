class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size() - 1;
        int j = b.size() - 1;
        int cin = 0;

        std::string result = "";

        while (i >= 0 || j >= 0 || cin) {
            int bitA = i >= 0 ? a[i] - '0' : 0;
            int bitB = j >= 0 ? b[j] - '0' : 0;
            int sum = bitA ^ bitB ^ cin;
            cin = (bitA & bitB) | (cin & (bitA ^ bitB));
            result += std::to_string(sum);

            --i;
            --j;
        }

        reverse(result.begin(), result.end());
        return result;
    }
};