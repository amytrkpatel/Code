"""
#! Minimum Jumps

#* Problem Link :> https://www.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1
#* GitHub       :> 

#todo Problem Description :>
Given an array arr[] of non-negative integers. Each array element represents the maximum length of the jumps that can be made forward from that element. This means if arr[i] = x, then we can jump any distance y such that y ≤ x.
Find the minimum number of jumps to reach the end of the array starting from the first element. If an element is 0, then you cannot move through that element.
Note:  Return -1 if you can't reach the end of the array.

Examples : 

Input: arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9}
Output: 3 
Explanation:First jump from 1st element to 2nd element with value 3. From here we jump to 5th element with value 9, and from here we will jump to the last. 
Input: arr = {1, 4, 3, 2, 6, 7}
Output: 2 
Explanation: First we jump from the 1st to 2nd element and then jump to the last element.
Input: arr = {0, 10, 20}
Output: -1
Explanation: We cannot go anywhere from the 1st element.
Expected Time Complexity: O(n)
Expected Space Complexity: O(1)

Constraints:
0 ≤ arr[i] ≤ 105
2 ≤ arr.size() ≤ 106

#? Time Complexity :> https://www.timecomplexity.ai/
"""

class Solution:
    def minJumps(self, arr):
        n, steps = len(arr), 0 # minimum steps/jumps required to reach the end of array
        
        for i in range(len(arr)):
            if n == 1:
                return 0
            elif arr[i] == 0: 
                return -1
            elif arr[i] > n:
                sliced_arr = arr[i:] # handles index out of bound problem
            else:
                sliced_arr = arr[i:arr[i]]
            
            i = max(sliced_arr) # gets the max in a sliced array to make a max jump
            steps += 1 # counts this iteration as a jump
        return steps

#Driver code
if __name__=='__main__':
    t = int(input('Enter Number of TestCases: '))
    for _ in range(t):
        arr = list(map(int,input('Enter Space separated Array').split())) #for taking space separated ints input as array
        ob = Solution()
        result = ob.minJumps(arr)
        print(result)