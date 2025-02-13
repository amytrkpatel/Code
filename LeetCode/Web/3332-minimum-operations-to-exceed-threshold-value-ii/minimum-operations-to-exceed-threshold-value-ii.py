import heapq
class Solution:
    def minOperations(self, nums: List[int], k: int) -> int:
        heapq.heapify(nums)  # Convert nums into a Min-Heap in O(n)
        op_count = 0  

        while len(nums) > 1 and nums[0] < k:  # nums[0] is always the minimum element
            a = heapq.heappop(nums)  # Remove smallest element
            b = heapq.heappop(nums)  # Remove second smallest element
            
            new_val = (min(a, b) * 2) + max(a, b)  # Apply operation
            heapq.heappush(nums, new_val)  # Push new value into heap
            
            op_count += 1  # Increment operation count

        # Return op_count if we reach the threshold, else return -1
        return op_count if nums[0] >= k else -1
