class Solution:
    def isPalindrome(self, s: str) -> bool:
        
        # Approach 1: Using Python to reverse the string and then matching
        #-------------------------------------------------------------------------------------
        # pal_s = ''.join(x.lower() for x in s if x.isalnum())
        # return pal_s == pal_s[::-1] #return if palindrome or not

        #Approach 2: Two Opposite Direction Pointer method
        #-------------------------------------------------
        # pal_s = ''.join(x.lower() for x in s if x.isalnum())

        # start, end = 0, len(pal_s)-1
        # while start < end:
        #     if pal_s[start] == pal_s[end]:
        #         start += 1
        #         end -= 1
        #     else:
        #         return False
        # return True

        #Approach 3: Space Efficient
        #-------------------------------------------------
        start, end = 0, len(s) - 1

        while start < end:
            # Move start if it's not alphanumeric
            while start < end and not s[start].isalnum():
                start += 1
            # Move end if it's not alphanumeric
            while start < end and not s[end].isalnum():
                end -= 1
            
            # Compare characters (ignoring case)
            if s[start].lower() != s[end].lower():
                return False
            
            start += 1
            end -= 1

        return True