"""
#! Prime Number

#* Problem Link :> https://www.geeksforgeeks.org/problems/prime-number2314/1


#todo Problem Description :>
For a given number n check if it is prime or not. Take an integer n as input parameters and returns an integer, 1 if n is a prime number or 0 otherwise.

Examples :

Input: n = 5
Output: 1
Explanation: 5 has 2 factors 1 and 5 only.
Input: n = 25
Output: 0
Explanation: 25 has 3 factors 1, 5, 25

Expected Time Complexity: O(sqrt(n))
Expected Space Complexity: O(1)

Constraints:
1 <= n <= 109

#? Time Complexity :> https://www.timecomplexity.ai/
"""

class Solution:
    def isPrime(self, n):
        #write your code here
        is_prime = 1
        if n == 1:
            return 0
        elif n == 2 or n == 3:
            return 1
        elif n % 2 == 0:
            return 0
        else:    
            for i in range(2,int(n ** 0.5)+1):
                if n % i == 0:
                    return 0
        return is_prime

#Driver code
if __name__=='__main__':
    t = int(input('Enter Number of TestCases: '))
    for _ in range(t):
        n = int(input()) # ! Number input
        ob = Solution()
        result = ob.isPrime(n)
        print(result)