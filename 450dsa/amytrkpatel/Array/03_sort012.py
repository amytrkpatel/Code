def sort012(a,n):
    dct = {a[i]:0 for i in range(0, n)}       #initialising Dictionary
    for i in a:
        dct[i] += 1
    b = []
    for key, value in dct.items():
        i = 0
        while value:
            b[i] = key
            value -= 1
            i += 1
    return b

#Driver code
if __name__=="__main__":
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = [int(x) for x in input().split()]
        print(sort012(a,n))
