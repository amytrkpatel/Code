class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        freq_dict = {i:0 for i in nums}
        for i in nums:
            freq_dict[i] += 1
        
        sorted_dict = dict(sorted(freq_dict.items(), key=lambda item: item[1], reverse=True))
        print(sorted_dict)  # Output: {'d': 4, 'a': 3, 'b': 2, 'c': 1}
        
        result = []
        
        for key,value in sorted_dict.items():
            k -= 1
            result.append(key)
            if k == 0:
                return result