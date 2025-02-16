class Solution:
    def isPalindrome(self, s: str) -> bool:
        
        # Approach 1: Using Python to reverse the string and then matching
        #-------------------------------------------------------------------------------------
        # pal_s = ''.join(x.lower() for x in s if x.isalnum())
        # return pal_s == pal_s[::-1] #return if palindrome or not

        #Approach 2: Two Opposite Direction Pointer method
        #-------------------------------------------------
        pal_s = ''.join(x.lower() for x in s if x.isalnum())

        start, end = 0, len(pal_s)-1
        while start < end:
            if pal_s[start] == pal_s[end]:
                start += 1
                end -= 1
            else:
                return False
        return True
