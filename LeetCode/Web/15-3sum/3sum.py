class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums.sort()  # Sorting helps with two-pointer approach
        result = []

        for i in range(len(nums) - 2):  # -2 to ensure room for left and right
            if i > 0 and nums[i] == nums[i - 1]:  # Skip duplicate `i` values
                continue

            left, right = i + 1, len(nums) - 1
            while left < right:
                currentSum = nums[i] + nums[left] + nums[right]
                
                if currentSum > 0:
                    right -= 1
                elif currentSum < 0:
                    left += 1
                else:
                    result.append([nums[i], nums[left], nums[right]])  # ✅ Correctly adding triplet

                    # Move `left` and `right` to avoid duplicates
                    while left < right and nums[left] == nums[left + 1]:
                        left += 1
                    while left < right and nums[right] == nums[right - 1]:
                        right -= 1
                    
                    left += 1  # Move to the next unique element
                    right -= 1  # Move to the next unique element

        return result