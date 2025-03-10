class Solution:
    def maxArea(self, height: List[int]) -> int:
        i = 0
        j = len(height)-1
        max_area = 0
        while i < j:
            current_area = (j - i) * min(height[i], height[j])
            max_area =  max(max_area, current_area)
            print(max_area)
            if height[i] < height[j]:
                i += 1
            else:
                j -= 1
        return max_area