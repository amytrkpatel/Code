def howSum_recursive(target, num):
    if target == 0:
        return []
    if target < 0:
        return None

    for n in num:
        remainder = target - n
        result = howSum_recursive(remainder, num)
        if result is not None:
            result.append(n)
            return result
    return None


def howSum_memoised(target, num, memo):
    if target in memo:
        return memo[target]
    if target == 0:
        return []
    if target < 0:
        return None

    for n in num:
        remainder = target - n
        result = howSum_memoised(remainder, num, memo)
        if result is not None:
            result.append(n)
            memo[target] = result
            return memo[target]

    memo[target] = None
    return None


def main():
    memo = {}
    print(howSum_recursive(7, [2, 4]))
    print(howSum_memoised(7, [5, 3, 4, 7], memo))


if __name__ == "__main__":
    main()
