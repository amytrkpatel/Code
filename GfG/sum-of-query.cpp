// https://practice.geeksforgeeks.org/problems/sum-of-query-ii5310/1
#include <bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;

        int A[n], Q[2 * q];
        for (int i = 0; i < n; i++)
            cin >> A[i];

        cin >> q;

        for (int j = 0; j < 2 * q; j++)
            cin >> Q[j];

        for (int i = 0; i < 2 * q; i += 2)
            cout << accumulate(A + i, A + i + 1, 0);
    }
}
