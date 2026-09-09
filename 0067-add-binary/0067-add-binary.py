class Solution:
    def addBinary(self, a: str, b: str) -> str:
        i = len(a) - 1
        j = len(b) - 1
        cin = 0
        result = []

        while (i >= 0 or j >= 0 or cin):
            bitA = a[i] == '1' if i >= 0 else False
            bitB = b[j] == '1' if j >= 0 else False
            sum = bitA ^ bitB ^ cin
            cin = (bitA & bitB) | (cin & (bitA ^ bitB))
            result.append('1' if sum else '0')
            i -= 1
            j -= 1
        
        return ''.join(reversed(result))
        