class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        if not s:
            return True
        s = list(s)
        for alphabet in t:
            if alphabet == s[0]:
                s.remove(s[0])
            if not s:
                return True
        return False