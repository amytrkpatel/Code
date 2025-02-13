#
# @lc app=leetcode id=7 lang=python3
#
# [7] Reverse Integer
#

"""
#! Reverse Integer
Category	Difficulty	Likes	Dislikes
algorithms	Medium (28.35%)	13418	13638
Tags
math

Companies
apple | bloomberg

Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

Example 1:

Input: x = 123
Output: 321
Example 2:

Input: x = -123
Output: -321
Example 3:

Input: x = 120
Output: 21

Constraints:

-231 <= x <= 231 - 1

#? Time Complexity :> https://www.timecomplexity.ai/
"""

# @lc code=start
class Solution:
    def reverse(self, x: int) -> int:
        #write your code here
        i = 0
        reversed_x = 0
        is_negative = False
        
        if x < 0:
            is_negative = True
            x = -1 * x
        
        while x:
            print("iteration: ",i)
            unit = x % 10
            print("unit digit: ", unit)
            reversed_x = reversed_x * 10 + unit
            print("reversed digit: ",reversed_x)
            x = x // 10
            print("remaining x: ",x)
            i += 1
        print(reversed_x.bit_length())
        if reversed_x.bit_length() >= 32:
            return 0
        elif is_negative:
            return -1 * reversed_x
        else:
            return reversed_x
# @lc code=end

