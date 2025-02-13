class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        nums_hashed = {}

        for i in range(len(nums)):
            complement = target - nums[i]
            
            if complement in nums_hashed:
                return [nums_hashed[complement], i]  # Return indices of the pair
            
            nums_hashed[nums[i]] = i  # Store the current number with its index
