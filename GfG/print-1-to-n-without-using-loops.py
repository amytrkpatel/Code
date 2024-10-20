"""
#! Print 1 to N Without Loop

#* Problem Link :> https://www.geeksforgeeks.org/problemsprint-1-to-n-without-using-loops-1587115620/1

#todo Problem Description :>
Print numbers from 1 to n without the help of loops. You only need to complete the function printNos() that takes N as parameter and prints number from 1 to N recursively.

Don't print newline, it will be added by the driver code.

Examples

Input: n = 10
Output: 1 2 3 4 5 6 7 8 9 10
Input: n = 5
Output: 1 2 3 4 5
Expected Time Complexity: O(n).
Expected Auxiliary Space: O(n) (Recursive).

Constraints:
1 <= n <= 1000

#? Time Complexity :> https://www.timecomplexity.ai/
"""

class Solution:
    def printNos(self, N):
        #Base Case: when N = 1, print 1
        if N == 1:
            print(1, end = ' ')
            return
        
        #Recursive case: print nos fom 1 to N-1
        self.printNos(N-1)
        print(N, end = ' ')

#Driver code
if __name__=='__main__':
    t = int(input('Enter Number of TestCases: '))
    for _ in range(t):
        N = int(input()) # ! Number input
        ob = Solution()
        result = ob.printNos(N)
        print(result)