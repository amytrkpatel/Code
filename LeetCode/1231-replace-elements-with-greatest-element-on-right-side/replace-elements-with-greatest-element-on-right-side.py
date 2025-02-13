class Solution:
    def replaceElements(self, arr: List[int]) -> List[int]:
        max = -1
        for i in range(len(arr)-1, -1, -1):
            element = arr[i]
            arr[i] = max
            if(element > max):
                max = element
        return arr