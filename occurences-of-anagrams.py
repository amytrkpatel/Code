# -*- coding: utf-8 -*-
"""
Created on Sun Apr 19 08:59:29 2020

@author: amytkpatel
"""
t = int(input())
for _ in range(t):
    s = input()
    c = input()
    lenS = len(s)
    lenC = len(c)
    anagrams = [ s[i:i+lenC] for i in range(lenS-lenC+1)]   #Comprehension format of a for loop
    anagrams = [ ''.join(sorted(i)) for i in anagrams ]
    anagrams.sort()
    c = ''.join(sorted(c))
    print(anagrams.count(c))