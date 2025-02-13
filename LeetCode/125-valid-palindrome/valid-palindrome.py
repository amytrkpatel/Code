class Solution:
    def isPalindrome(self, s: str) -> bool:
        pal_s = ''.join(x.lower() for x in s if x.isalnum())
        return pal_s == pal_s[::-1]