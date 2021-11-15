def grid_recursive(m,n): #TC is O(2^(m+n))
    if m == 1 and n == 1:
        return 1
    if m == 0 or n == 0:
        return 0
    return grid_recursive(m-1, n) + grid_recursive(m, n-1)


def grid_memoisation(m, n, memo): #TC is O(mn)
    key = str(m) + ',' + str(n)
    
    if key in memo:
        return memo[key]
    if m == 1 and n == 1:
        return 1
    if m == 0 or n == 0:
        return 0
    memo[key] =  grid_memoisation(m-1, n, memo) + grid_memoisation(m, n-1, memo)
    return memo[key]
    


def main():
    memo = {}
    
    print(grid_recursive(1,1)) #1
    print(grid_recursive(2,3)) #3
    print(grid_recursive(3,2)) #3
    print(grid_recursive(3,3)) #6
    print(grid_memoisation(18,18, memo)) #2333606220


if __name__=="__main__": 
    main()