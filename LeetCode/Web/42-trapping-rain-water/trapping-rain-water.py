class Solution:
    def trap(self, height: List[int]) -> int:
        left, right = 0, len(height) - 1
        left_max, right_max = 0, 0
        total_water = 0
        
        while left < right:
            left_max = max(left_max, height[left])
            right_max = max(right_max, height[right])
            
            if height[left] < height[right]:  # Move left pointer when left boundary is smaller
                total_water += left_max - height[left]
                left += 1
            else:  # Move right pointer otherwise
                total_water += right_max - height[right]
                right -= 1
        
        return total_water
