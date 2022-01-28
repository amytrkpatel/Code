// https://www.hackerrank.com/contests/projecteuler/challenges/euler001/problem
#include <bits/stdc++.h>
using namespace std;
/*    TRIANGULAR NUMBER: Σx = 1+2+3+...+x = x*(x+1)/2     */
unsigned long long sum(unsigned long long x)
{
    return x * (x + 1) / 2;
}

int main()
{
    unsigned int tests;
    cin >> tests;
    while (tests--)
    {
        unsigned long long int lastnum;
        cin >> lastnum;

        lastnum--; // not including that last number

        // find so=um of all numbers divisible by 3 or 5
        auto sumThree = 3 * sum(lastnum / 3);
        auto sumFive = 5 * sum(lastnum / 5);

        // however those number divisible by 3 and 5 will be counted twice
        auto sumFifteen = 15 * sum(lastnum / 15);

        cout << (sumThree + sumFive - sumFifteen) << "\n";
    }
    return 0;
}
