"""
#! Count-Digits

#* Problem Link :> https://www.geeksforgeeks.org/problems/count-digits5716/1

#todo Problem Description :>
    Given a number n. Count the number of digits in n which evenly divide n. Return an integer, total number of digits of n which divides n evenly.

    Note :- Evenly divides means whether n is divisible by a digit i.e. leaves a remainder 0 when divided.


    Examples :

    Input: n = 12
    Output: 2
    Explanation: 1, 2 when both divide 12 leaves remainder 0.
    Input: n = 2446
    Output: 1
    Explanation: Here among 2, 4, 6 only 2 divides 2446 evenly while 4 and 6 do not.
    Input: n = 23
    Output: 0
    Explanation: 2 and 3, none of them divide 23 evenly.
    Expected Time Complexity: O(n)
    Expected Space Complexity: O(1)


    Constraints:
    1<= n <=105

#? Time Complexity :> https://www.timecomplexity.ai/
"""

class Solution:
    def evenlyDivides (self, N):
        temp_N = N
        even_div_counter = 0
        while(temp_N > 0):
            unit = temp_N % 10
            temp_N = temp_N // 10
            if unit != 0 and N % unit == 0:
                even_div_counter += 1
        return even_div_counter


if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        N = int(input())
        ob = Solution()
        print(ob.evenlyDivides(N))
