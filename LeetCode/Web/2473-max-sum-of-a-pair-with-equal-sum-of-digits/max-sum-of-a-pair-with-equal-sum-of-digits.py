class Solution:
    def maximumSum(self, nums: List[int]) -> int:
        
        # A function to find sum of digits
        def sum_of_digits(n: int) -> int:
            sum = 0
            while n:
                unit = n % 10
                sum += unit
                n = n // 10
            return sum
        
        # Create an empty dictionary, whose values will be list
        hash = {}
        
        # iterate over nums and create a hash of values with same sum of digits
        for i in nums:
            sum_i = sum_of_digits(i)
            print(f"for {i} sum is: {sum_i}")
            hash.setdefault(sum_i, []).append(i)
        print(hash)
        # iterate over the dictionary now to sum all the values in the list and update maximum
        max_sum = -1
        for key, values in hash.items():
            if len(values) > 1:
                values.sort()
                sum_of_values = sum(values[-2:])
                max_sum = max(max_sum, sum_of_values)
        return max_sum