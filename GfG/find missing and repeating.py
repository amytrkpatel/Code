# https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1
import numpy as np
t = int(input())

for j in range(0,t):
    n = list(map(int,input().split()))
    a = [int(x) for x in input().split()]
    b = np.ones((n[0]+1,), dtype=int)
    a = np.asarray(a)
    for i in range(0,n[0]):
        if(b[a[i]]>0):
            b[a[i]] = -1
        else:
            r = a[i]
    for i in range(1,n[0]+1):
        if(b[i]>0):
            m = i
    print(r,m)
        
    