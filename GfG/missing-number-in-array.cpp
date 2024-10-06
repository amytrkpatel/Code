// https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1/

#include <bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int A[n], sum = 0, i, isum = 0;
        for (i = 1; i <= (n - 1); i++)
        {
            cin >> A[i];
            sum = sum + A[i];
            isum = isum + i;
        }
        isum = isum + i;
        cout << "isum is:" << isum << "\n";
        cout << "sum is:" << sum << "\n";
        cout << "missing is:" << isum - sum << "\n";
    }
}
