class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        dic = {}
        for index, elem in enumerate(nums):
            if target-elem in dic:
                return dic[target-elem], index
            dic[elem] = index