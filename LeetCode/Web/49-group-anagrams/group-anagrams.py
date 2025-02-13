class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        if len(strs) == 0:
            return [strs]
        
        dict_of_anagrams = defaultdict(str)
        
        for i in range(0, len(strs)):
            if ''.join(sorted(strs[i])) not in dict_of_anagrams.keys():
                dict_of_anagrams[''.join(sorted(strs[i]))] = [strs[i]]
            else:
                dict_of_anagrams[''.join(sorted(strs[i]))].append(strs[i])
        result = [value for key, value in dict_of_anagrams.items()]
        return result