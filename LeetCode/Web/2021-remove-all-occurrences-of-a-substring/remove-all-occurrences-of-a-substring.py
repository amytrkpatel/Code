class Solution:
    def removeOccurrences(self, s: str, part: str) -> str:
        new_str = s.replace(part, '', 1)  # Replace occurrences of 'part'

        if new_str == s:  # Base case: No change in string.
            return new_str

        return self.removeOccurrences(new_str, part)  # Return the recursive call
