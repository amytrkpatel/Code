class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False

        hash_s = {}
        hash_t = {}
        for i in range(len(s)):
            if s[i] not in hash_s:
                hash_s[s[i]] = set(t[i])
            else:
                hash_s[s[i]].add(t[i])
            
            if t[i] not in hash_t:
                hash_t[t[i]] = set(s[i])
            else:
                hash_t[t[i]].add(s[i])
        
        for v in hash_s.values():
            if len(v) > 1:
                return False
        
        for v in hash_t.values():
            if len(v) > 1:
                return False
        
        print(hash_s)
        print(hash_t)
        return True