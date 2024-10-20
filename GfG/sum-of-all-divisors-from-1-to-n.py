"""
#! Sum of all divisors from 1 to n

#* Problem Link :> https://www.geeksforgeeks.org/problems/sum-of-all-divisors-from-1-to-n4738/1
#* GitHub       :> 

#todo Problem Description :>
Given a positive integer N., The task is to find the value of Σi from 1 to N F(i) where function F(i) for the number i is defined as the sum of all divisors of i.

Example 1:

Input:
N = 4
Output:
15
Explanation:
F(1) = 1
F(2) = 1 + 2 = 3
F(3) = 1 + 3 = 4
F(4) = 1 + 2 + 4 = 7
ans = F(1) + F(2) + F(3) + F(4)
    = 1 + 3 + 4 + 7
    = 15
Example 2:

Input:
N = 5
Output:
21
Explanation:
F(1) = 1
F(2) = 1 + 2 = 3
F(3) = 1 + 3 = 4
F(4) = 1 + 2 + 4 = 7
F(5) = 1 + 5 = 6
ans = F(1) + F(2) + F(3) + F(4) + F(5)
    = 1 + 3 + 4 + 7 + 6
    = 21
Your Task:  
You don't need to read input or print anything. Your task is to complete the function sumOfDivisors() which takes an integer N as an input parameter and returns an integer.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

Constraints:
1 <= N <= 10^6

#? Time Complexity :> https://www.timecomplexity.ai/
"""
class Solution:
    def FofN(self,i):
        s = 0
        for j in range(1, i+1):
            if i % j == 0:
                s += j
        return s
    
    def sumOfDivisors(self, N): #! TLE
        #write your code here
        sumOfAll = 0
        for i in range(1,N+1):
            sumOfAll += self.FofN(i)
        return sumOfAll
    
    def sumOfDivisorsOptimal(Self, N):
        # Initialize sum to 0
        sumOfAll = 0
        
        # Iterate through all numbers from 1 to N
        for i in range(1, N + 1):
            # For each i, add i * (N // i) to the total sum
            sumOfAll += i * (N // i)
        
        return sumOfAll

#Driver code
if __name__=='__main__':
    t = int(input('Enter Number of TestCases: '))
    for _ in range(t):
        # ? Remove what is not needed from below samples:
        N = int(input()) # ! Number input
        ob = Solution()
        result = ob.sumOfDivisorsOptimal(N)
        print(result)