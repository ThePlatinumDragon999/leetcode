class Solution {
public:
    int romanToInt(string s) {
        std::unordered_map<char, int> values;
        values['I'] = 1;
        values['V'] = 5;
        values['X'] = 10;
        values['L'] = 50;
        values['C'] = 100;
        values['D'] = 500;
        values['M'] = 1000;

        int val = 0;

        for (size_t i = 0; i < s.length(); ++i) {
            if (i + 1 < s.length() &&
                values[s[i]] < values[s[i+1]])
            {
                val += (values[s[i+1]] - values[s[i]]);
                ++i;
            }
            else 
            {
                val += values[s[i]];
            }
        }

        return val;
        
    }
};