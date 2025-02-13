class Solution:
    def reverse(self, x: int) -> int:
        reversed_x = 0
        is_negative = False
        
        if x < 0:
            is_negative = True
            x = -1 * x
        
        while x:
            unit = x % 10
            reversed_x = reversed_x * 10 + unit
            x = x // 10
        
        if reversed_x.bit_length() >= 32:
            return 0
        elif is_negative:
            return -1 * reversed_x
        else:
            return reversed_x