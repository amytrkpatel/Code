"""
#! Print N to 1 without loop

#* Problem Link :> https://www.geeksforgeeks.org/problems/print-n-to-1-without-loop/1
#* GitHub       :> 

#todo Problem Description :>

Difficulty: Easy
Accuracy: 77.72%
Submissions: 74K+
Points: 2

Print numbers from N to 1 (space separated) without the help of loops.

Example 1:

Input:
N = 10
Output: 10 9 8 7 6 5 4 3 2 1
Your Task:
This is a function problem. You only need to complete the function printNos() that takes N as parameter and prints number from N to 1 recursively. Don't print newline, it will be added by the driver code.


Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N) (Recursive).

Constraint
1<=n<=1000

#? Time Complexity :> https://www.timecomplexity.ai/
"""

class Solution:
    def printNos(self, N):
        if N == 1:
            print(1, end=' ')
        else:
            print(N, end=' ')  # Print the current number first
            self.printNos(N - 1)  # Then recurse to the smaller number

#Driver code
if __name__=='__main__':
    t = int(input('Enter Number of TestCases: '))
    for _ in range(t):
        arg = int(input()) # ! Number input
        ob = Solution()
        result = ob.printNos(arg)
        print(result)