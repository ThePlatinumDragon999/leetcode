class Solution:
    def isPalindrome(self, s: str) -> bool:
        clean = re.sub(r"[^a-zA-Z0-9]", "", s).lower()
        for i in range(len(clean) // 2):
            if clean[i] != clean[len(clean) - 1 - i]:
                return False
        
        return True
        