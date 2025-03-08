class Solution:
    def triangleNumber(self, nums: List[int]) -> int:
        nums.sort()
        combinations = 0
        for c in range(len(nums)-1, -1, -1):
            left = 0
            right = c-1
            while left < right:    
                if nums[left] + nums[right] > nums[c]:
                    combinations += right - left
                    right -= 1
                else:
                    left += 1
        return combinations