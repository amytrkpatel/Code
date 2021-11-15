# Problem Link :> https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/

def reverseWord(s):
    print(s[::-1])


# Driver code
if __name__ == "__main__":
    t = int(input())
    while(t > 0):
        s = input()
        reverseWord(s)
        t = t-1
