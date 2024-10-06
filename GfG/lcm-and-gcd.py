"""
#! LCM and GCD

#* Problem Link :> https://www.geeksforgeeks.org/problems/lcm-and-gcd4516/1
#* GitHub       :> 

#todo Problem Description :>
    Given two integers a and b, write a function lcmAndGcd() to compute their LCM and GCD. The function takes two integers a and b as input and returns a list containing their LCM and GCD.

    Example 1:

    Input: a = 5 , b = 10
    Output: 10 5
    Explanation: LCM of 5 and 10 is 10, while their GCD is 5.
    Input: a = 14 , b = 8
    Output: 56 2
    Explanation: LCM of 14 and 8 is 56, while their GCD is 2.
    Expected Time Complexity: O(log(min(a, b))
    Expected Auxiliary Space: O(1)

    Constraints:
    1 <= a, b <= 109

#? Time Complexity :> https://www.timecomplexity.ai/
"""

class Solution:
    
    #! Approach 1: Brute Force
    #* GCD: iterating from 1 to min of a & b, and then dividing both a & b to find the greatest divisor.
    #* LCM: LCM(a, b) = (a x b) / GCD(a, b)
    #! Result: TLE
    def lcmAndGcdBruteForce(self,A,B):
        #write your code here
        gcd = -1
        for i in range(1,min(A,B)+1):
            if A % i == 0 and B % i == 0:
                gcd = i
        lcm = (A* B)//gcd
        return [lcm,gcd]
    
    #! Approach 2: Optimized Brute Force
    #* GCD: iterating from min of a & b to 1, and then dividing both a & b till find the greatest divisor. The idea here is that we will be starting with greater number first, hence, minimizing the number of required divisions
    #! Result: TLE
    def lcmAndGcdOptimizedBruteForce(self,A,B):
        #write your code here
        gcd = -1
        for i in range(min(A,B),1,-1):
            if A % i == 0 and B % i == 0:
                gcd = i
        lcm = (A* B)//gcd
        return [lcm,gcd]
    
    #! Approach 3: Optimal
    #* GCD: iterating from min of a & b to 1, and then dividing both a & b till find the greatest divisor. The idea here is that we will be starting with greater number first, hence, minimizing the number of required divisions
    #! Result: 
    
    def findGcd(self,a,b):
        if a == 0:
            return b
        return self.findGcd(b % a, a)
    
    def lcmAndGcdOptimal(self,A,B):
        #write your code here
        gcd = -1
        if A == 0:
            return B
        else:
            gcd = self.findGcd(A,B)
        lcm = (A* B)//gcd
        return [lcm,gcd]

#Driver code
import math
if __name__=='__main__':
    t = int(input('Enter Number of TestCases: '))
    for _ in range(t):
        # ? Remove what is not needed from below samples:
        a,b = map(int,input().split()) # ! Take 2 numbers as input
        ob = Solution()
        result = ob.lcmAndGcdOptimal(a,b)
        print(result)

