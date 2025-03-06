class Solution:
    def reverseWords(self, s: str) -> str:
        res = s.strip().split(' ')
        res_filtered = [string for string in res if string]
        return " ".join(res_filtered[::-1])