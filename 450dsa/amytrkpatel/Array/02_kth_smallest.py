"""
The first approach seems to be sort the array with O(nlogn) time complexity and then fetch the kth element.
"""

# Problem Link :> https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1


def Kelement(a, k):
    a = sorted(a)
    kth = a[k-1]
    return kth


# Driver code
if __name__ == "__main__":
    t = int(input())
    while(t > 0):
        n = int(input())
        a = [int(x) for x in input().split()]
        k = int(input())
        print(Kelement(a, k))
        t = t-1
