t = int(input())

for j in range(0,t):
    n = int(input())
    a = list(map(int,input().split()))
    a.sort()
    m = []
    r = []
    for i in range(0,n-1):
        if(a[i]==a[i+1]):
            r.append(a[i])
    a = list(set(a))
    for i in a:
        if(i!=a.index(i)+1):
            m.append(i-1)
    print(r[0],m[0])