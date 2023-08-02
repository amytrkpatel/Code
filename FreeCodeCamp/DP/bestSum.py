def bestSum_recursive(target, num):
    if target == 0:
        return []
    if target < 0:
        return None
    
    shortest = None

    for n in num:
        remainder = target - n
        result = bestSum_recursive(remainder, num)

        if result is not None:
            result.append(n)
            combination = result
            
            if shortest == None or len(combination) < len(shortest):
                shortest = combination
    return shortest

def bestSum_memoised(target, num, memo):
    if target in memo:
        return memo[target]
    if target == 0:
        return []
    if target < 0:
        return None
    
    shortest = None

    for n in num:
        remainder = target - n
        result = bestSum_memoised(remainder, num, memo)

        if result is not None:
            result.append(n)
            combination = result
            
            if shortest == None or len(combination) < len(shortest):
                shortest = combination
    
    memo[target] = shortest
    return shortest

def main():
    memo = {}
    print(bestSum_recursive(7, [5,3,4,7])) #[7]
    print(bestSum_recursive(8, [2,3,5])) # [3,5]
    print(bestSum_recursive(8, [1,4,5])) #[4,4]
    print(bestSum_memoised(100, [1,2,5,25], memo))

if __name__=="__main__":
	main()