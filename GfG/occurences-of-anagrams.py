"""
https://practice.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1
"""
t = int(input())
for _ in range(t):
    s = input()
    c = input()
    lenS = len(s)
    lenC = len(c)
    # Comprehension format of a for loop
    anagrams = [s[i:i+lenC] for i in range(lenS-lenC+1)]
    anagrams = [''.join(sorted(i)) for i in anagrams]
    anagrams.sort()
    c = ''.join(sorted(c))
    print(anagrams.count(c))
