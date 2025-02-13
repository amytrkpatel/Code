class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
    
        dict_s = {s[i]:0 for i in range(0, len(s))}
            
        for i in s:
            dict_s[i] += 1
        
        dict_t = {t[j]:0 for j in range(0, len(t))}

        for j in t:
            dict_t[j] += 1
        try:
            for key, val in dict_s.items():
                if dict_s[key] != dict_t[key]:
                    return False
            return True
        except Exception:
            return False