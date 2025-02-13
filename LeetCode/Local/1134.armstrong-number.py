"""
#! 1134.Armstrong Number

#* GitHub       :> https://github.com/doocs/leetcode/blob/main/solution/1100-1199/1134.Armstrong%20Number/README_EN.md

#todo Problem Description :>
    Given an integer n, return true if and only if it is an Armstrong number.

    The k-digit number n is an Armstrong number if and only if the kth power of each digit sums to n.

    Example 1:

    Input: n = 153
    Output: true
    Explanation: 153 is a 3-digit number, and 153 = 1^3 + 5^3 + 3^3.
    Example 2:

    Input: n = 123
    Output: false
    Explanation: 123 is a 3-digit number, and 123 != 1^3 + 2^3 + 3^3 = 36.

    Constraints:

    1 <= n <= 108

#? Time Complexity :> https://www.timecomplexity.ai/
"""

class Solution:
    def armstrongNumber(self,n): # ! Approach 1: Brute Force
        import math
        #write your code here
        power = math.floor(math.log10(n)+1)
        temp_n = n
        prod_sum = 0
        while temp_n:
            unit = temp_n % 10
            prod_sum += unit ** power
            temp_n = temp_n // 10
            if prod_sum == n:
                return True
        return False
    
    def armstrongNumberSimplified(self,n):
        #write your code here
        digits = len(str(n))
        temp_n, prod_sum = n, 0
        while temp_n:
            prod_sum += (temp_n % 10) ** digits
            temp_n //= 10
        return prod_sum == n

#Driver code
if __name__=='__main__':
    t = int(input('Enter Number of TestCases: '))
    for _ in range(t):
        n = int(input()) # ! Number input
        ob = Solution()
        result = ob.armstrongNumber(n)
        print(result)