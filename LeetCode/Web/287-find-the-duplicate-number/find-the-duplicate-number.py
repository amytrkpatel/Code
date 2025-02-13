class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        nums_hashed = {}
        for num in nums:
            if num in nums_hashed:
                return num  # Found the duplicate
            nums_hashed[num] = 1  # Mark it as seen
