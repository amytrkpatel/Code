class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        left = 0
        freq_map = {}
        max_count = 0  # Track most frequent character count
        max_window = 0

        for right in range(len(s)):
            # Add current character to freq_map
            freq_map[s[right]] = freq_map.get(s[right], 0) + 1

            # Track the most frequent character count in the current window
            max_count = max(max_count, freq_map[s[right]])

            # Current window size: right - left + 1
            window_size = right - left + 1

            # Check if window is invalid
            if window_size - max_count > k:
                # Shrink window from the left
                freq_map[s[left]] -= 1
                left += 1
            else:
                # Update max window size if valid
                max_window = max(max_window, window_size)

        return max_window