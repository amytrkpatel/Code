// https://www.spoj.com/problems/PRIME1/
#include <bits/stdc++.h>
using namespace std; // hint: use STL
void printPrime(int m, int n)
{
    int i, flag;
    if (m < 2)
        m = 2;
    while (m <= n)
    {
        flag = 0;

        for (i = 2; i <= m / 2; ++i)
        {
            if (m % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            cout << m << "\n";

        ++m;
    }
}

int main()
{
    int t, m, n;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d", &m, &n);
        printPrime(m, n);
        printf("\n");
    }
    return 0;
}
