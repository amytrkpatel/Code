class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False

        hash_s = {}  # Maps s[i] -> t[i]
        hash_t = {}  # Maps t[i] -> s[i]

        for i in range(len(s)):
            if (s[i] in hash_s and hash_s[s[i]] != t[i]) or (t[i] in hash_t and hash_t[t[i]] != s[i]):
                return False

            hash_s[s[i]] = t[i]
            hash_t[t[i]] = s[i]

        return True
