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

"""
For a comparatively large list, under time constraints, it seems that the reversed() function performs faster than the slicing method. This is because reversed() just returns an iterator that iterates the original list in reverse order, without copying anything whereas slicing creates an entirely new list, copying every element from the original list. For a list with 10^6 Values, the reversed() performs almost 20,000 better than the slicing method. If there is a need to store the reverse copy of data then slicing can be used but if one only wants to iterate the list in reverse manner, reversed() is definitely the better option.

OPTIMAL CODE:

ls = reversed(ls)
print('Iterator object :', ls)
for element in ls:
    print(element)
"""
