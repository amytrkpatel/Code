#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sumOfDigits(int n){
   int sum=0;
    while(n!=0)
    {
        sum = sum + n%10;
        n /= 10;
    }
    return sum;
}
int main() {

    int n, sum;
    long int square;
    scanf("%d", &n);
    square = n * n;
    sum = sumOfDigits(square);

    if(sum == n)
        printf("1");
    else
        printf("0");
    return 0;
}
