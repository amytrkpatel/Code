class Solution:
    def findRestaurant(self, list1: List[str], list2: List[str]) -> List[str]:
        dictnary = {}  # Stores word -> sum of indices
        min_index_sum = float('inf')
        common_keys = []
        
        set_list2 = set(list2)  # Convert list2 to set for O(1) lookup

        # Store indices of common words from list1
        for i, word in enumerate(list1):
            if word in set_list2:
                dictnary[word] = [i]  # Initialize dictionary with index
        
        # Update dictionary with indices from list2
        for i, word in enumerate(list2):
            if word in dictnary:
                dictnary[word].append(i)  # Append second index

        # Find minimum index sum
        for key, indices in dictnary.items():
            index_sum = sum(indices)  # Compute sum once
            if index_sum < min_index_sum:
                min_index_sum = index_sum
                common_keys = [key]  # Reset list with new minimum
            elif index_sum == min_index_sum:
                common_keys.append(key)  # Append if equal

        return common_keys