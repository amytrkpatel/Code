class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        lcs = 0
        numSet = set(nums)
        if len(numSet) == 1:
            return lcs+1
        for n in numSet:
            if (n-1) not in numSet:
                length = 0
                while (n + length) in numSet:
                    length += 1
                lcs = max(length, lcs)
        return lcs