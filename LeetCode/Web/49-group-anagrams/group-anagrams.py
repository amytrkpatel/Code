class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        if len(strs) == 0:
            return [[]]  # Fix: Empty list inside a list
        
        dict_of_anagrams = defaultdict(list)  # Fix: defaultdict(list) instead of defaultdict(str)

        for word in strs:
            sorted_word = ''.join(sorted(word))  # Sort the word
            dict_of_anagrams[sorted_word].append(word)  # Group anagrams together

        return list(dict_of_anagrams.values())  # Return grouped anagrams
