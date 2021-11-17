# https://practice.geeksforgeeks.org/problems/is-binary-number-multiple-of-3/0


def even_sum(x):
    count = 0
    for i in range(0, len(x), 2):
        if x[i] == '1':
            count = count + 1
    return count


def odd_sum(x):
    count = 0
    for i in range(1, len(x), 2):
        if x[i] == '1':
            count = count + 1
    return count

t = int(input())
for _ in range(t):
    n = input()

    diff = abs( even_sum(n) - odd_sum(n))

    if diff % 3 == 0:
        print(1)
    else:
        print(0)
