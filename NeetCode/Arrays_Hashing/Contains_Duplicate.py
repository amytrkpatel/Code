# Problem Link :> https://leetcode.com/problems/contains-duplicate/

""" 
! Approach1: 
! Counting the frequency of each character 
! and as soon as one of them registers as occuring atleast twice, return True 
"""
""" def contains_duplicate(num):
    # * initializing a dictionary
    dctnry = {num[val] : 0 for val in range(0, len(num))}

    # * counting frequency
    for val in num:
        dctnry[val] += 1

        # * checking if any element occurs atleast twice
        if(dctnry[val] >= 2):
            return True
    return False """

# ! NeetCode Solution:
def contains_duplicate(nums: List[int]) -> bool:
    hashset = set()
    
    for n in nums:
        if n in hashset:
            return True
        hashset.add(n)
    return False

# Driver code
if __name__=="__main__":
    t = int(input())
    nums = []
    for _ in range(t):
        nums = list(map(int,input().split())) # ! for taking single line space separated ints
    
    print(contains_duplicate(nums))