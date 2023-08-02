#slow for large n, even for 40. O(2^n) is TC

def Fib_recursive(n):
    if n <= 2:
        return 1
    return Fib_recursive(n-1) + Fib_recursive(n-2)

#Linear Time Complexity: O(2n) == O(n)
def Fib_memoisation(n, memo):       #Function calls in python? Copying the data structure?
    if n in memo:
        return memo[n]

    if n <= 2:
        return 1
    memo[n] = Fib_memoisation(n-1, memo) + Fib_memoisation(n-2, memo)
    return memo[n]

def main():
    memo = {}
    output = Fib_memoisation(50, memo)
    print(output)


if __name__=="__main__": 
    main()