class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        # Initialize an empty list to store the product
        result = [1] * len(nums)

        # Calculate the product of all elements to the left of each element
        prefix = 1
        for i in range(len(nums)):
            result[i] = prefix
            prefix *= nums[i]
        
        # Calculate the product of all elements to the right of each element (excluding self)
        postfix = 1
        for i in range(len(nums) - 1, -1, -1):
            result[i] *= postfix
            postfix *= nums[i]
        return result