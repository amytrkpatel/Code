#Problem Link :> https://leetcode.com/problems/valid-anagram/

# ! Approach 1: summing up the frequency of all letters in s & t and matching them
# ? FAILED: cat & rat would be 3, but not anagrams
""" def is_anagram(s: str, t: str) -> bool:
    
    dict_s = {s[i]:0 for i in range(0, len(s))}
    
    for i in s:
        dict_s[i] += 1
    
    dict_t = {t[j]:0 for j in range(0, len(t))}

    for j in t:
        dict_t[j] += 1
    
    if sum(dict_s.values()) == sum(dict_t.values()):
        return True
    return False """

# ! Approach 2: Matching the frequency of each individual key-value pair
def is_anagram(s: str, t: str) -> bool:
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

# ! Approach 3: sort the strings and match
# ? LAME Approach
""" def is_anagram(s: str, t: str) -> bool:
    
    s = sorted(s)
    t = sorted(t)

    if s == t:
        return True
    return False  """

# ! NeetCode Solution:
""" def isAnagram(s: str, t: str) -> bool:
    if len(s) != len(t):
        return False
    
    countS, countT = {}, {}
    
    for i in range(len(s)):
        countS[s[i]] = 1 + countS.get(s[i], 0)
        countT[t[i]] = 1 + countT.get(t[i], 0)
    for c in countS:
        if countS[c] != countT.get(c, 0):
            return False
    return True """

# ? Driver code
if __name__=="__main__":
    t = int(input())
    for _ in range(t):
        string1 = input()
        string2 = input()
        print(is_anagram(string1, string2))