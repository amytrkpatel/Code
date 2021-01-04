#!/usr/bin/env python
# coding: utf-8

# https://practice.geeksforgeeks.org/problems/bit-difference/0


t = int(input())
for _ in range(t):
    n = int(input())
    l = list(map(int,input().split()))

    xor = []


    for i in range(n):
        for j in range(i+1,n):
            xor.append(l[i] ^ l[j])
            #print("{0} ^ {1}".format(l[i],l[j]))

    def countOnes(num):
        binary = bin(num)
        No1s = [ones for ones in binary[2:] if ones=='1'] #Using list comprehension, here No1s is a list
        return len(No1s)


    diff = 0

    for i in xor:
        diff += countOnes(i)

    print(diff*2)


# In[ ]:
