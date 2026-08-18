class Solution:
    def romanToInt(self, s: str) -> int:
        values = {}
        values['I'] = 1
        values['V'] = 5
        values['X'] = 10
        values['L'] = 50
        values['C'] = 100
        values['D'] = 500
        values['M'] = 1000

        val = 0

        i = 0

        while i < len(s):
            if i + 1 < len(s) and values[s[i]] < values[s[i+1]]:
                val += values[s[i+1]] - values[s[i]]
                i += 2
            else:
                val += values[s[i]]
                i += 1
        
        return val
        