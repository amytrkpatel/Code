// https://www.geeksforgeeks.org/neon-number/#:~:text=A%20neon%20number%20is%20a,of%20the%20square%20is%209.

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

    int n, sum;
    long int square;
    scanf("%d", &n);
    square = n * n;
    sum = sumOfDigits(square);

    if (sum == n)
        printf("1");
    else
        printf("0");
    return 0;
}
