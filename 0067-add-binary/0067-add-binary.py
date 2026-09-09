class Solution:
    def addBinary(self, a: str, b: str) -> str:
        i = len(a) - 1
        j = len(b) - 1
        cin = 0
        result = []

        while (i >= 0 or j >= 0 or cin):
            bitA = int(a[i]) if i >= 0 else 0
            bitB = int(b[j]) if j >= 0 else 0
            sum = bitA ^ bitB ^ cin
            cin = (bitA & bitB) | (cin & (bitA ^ bitB))
            result.append(str(sum))
            i -= 1
            j -= 1
        
        return ''.join(reversed(result))
        