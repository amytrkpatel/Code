class Solution:
    def findRestaurant(self, list1: List[str], list2: List[str]) -> List[str]:
        print(list1)
        print(list2)
        
        dictnary = {}
        min_index_sum = float('inf')
        common_key = []

        for i in range(len(list1)):
            if list1[i] in list2:
                dictnary[list1[i]] = [i]
        
        print(dictnary)

        for i in range(len(list2)):
            if list2[i] in list1:
                if list2[i] in dictnary.keys():
                    dictnary[list2[i]].append(i)
                else:
                    dictnary[list1[i]] = [i]
        print(dictnary)

        for key, value in dictnary.items():
            if sum(dictnary[key]) < min_index_sum:
                print(f"sum of {dictnary[key]} = {sum(dictnary[key])} which is <= {min_index_sum}")
                common_key = [key]
                print(f"common_key = {common_key}")
                min_index_sum = sum(dictnary[key])
                print(f"min_index_sum = {min_index_sum}")
            elif sum(dictnary[key]) == min_index_sum:
                common_key.append(key)
                min_index_sum = sum(dictnary[key])
                print(f"common_key = {common_key}")
                min_index_sum = sum(dictnary[key])
                print(f"min_index_sum = {min_index_sum}")
        return common_key