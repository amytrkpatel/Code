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

int PrimeOrNot( int n){
    int i, flag =1;
    for(i=2; i<=n/2; ++i){
    //condition for non prime number
        if(n%i == 0){
            flag = 0;
            break;
        }
    }
    return flag;
}

int main() {

    int n, sum, flag;
    scanf("%d", &n);
    flag = PrimeOrNot( sumOfDigits(n) );
    if(sum%2!=0)
    {
        if(flag == 1){
            printf("4");
        }
        else
            printf("2");
    }
    else{
        if(flag == 1){
            printf("3");
        }
        else
            printf("1");
    }

    return 0;
}

