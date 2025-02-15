class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        if not nums:
            return 0  # Edge case: Empty list
        
        numSet = set(nums)
        longest_streak = 0

        for n in numSet:
            # Start a new sequence only if it's the beginning of a sequence
            if (n - 1) not in numSet:
                current_streak = 1
                while (n + current_streak) in numSet:
                    current_streak += 1
                
                longest_streak = max(longest_streak, current_streak)
        
        return longest_streak