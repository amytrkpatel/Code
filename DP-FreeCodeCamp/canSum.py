def canSum_recursive(target, num):
    if target == 0:
        return True
    if target < 0:
        return False
    
    for n in num:
        remainder = target - n
        if canSum_recursive(remainder, num) == True:
            return True
    
    return False


def canSum_memoised(target, num, memo):
    if target in memo:
        return memo[target]
    if target == 0:
        return True
    if target < 0:
        return False
    
    for n in num:
        remainder = target - n
        if canSum_memoised(remainder, num, memo) == True:
            memo[target] = True
            return True
    
    memo[target] = False
    return False


def main():
    t = int(input())
    for _ in range(t):
        m = int(input())
        #n = int(input())
        arr = [int(x) for x in input().split()]
        memo = {}
        #print(canSum_recursive(m,arr))
        print(canSum_memoised(m,arr, memo))
    

if __name__=="__main__": 
    main()