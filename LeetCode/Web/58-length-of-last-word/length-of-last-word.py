class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        lst = []
        lst = s.strip().split(' ')
        return len(lst[-1])