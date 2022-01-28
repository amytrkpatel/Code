// https://www.geeksforgeeks.org/program-for-sum-of-the-digits-of-a-given-number/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int sumOfDigits(int n)
{
    int sum = 0;
    while (n != 0)
    {
        sum = sum + n % 10;
        n /= 10;
    }
    return sum;
}
int main()
{
    int n, result;
    scanf("%d", &n);
    result = sumOfDigits(n);
    printf("%d", result);
}
