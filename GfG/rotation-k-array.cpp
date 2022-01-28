// https://practice.geeksforgeeks.org/problems/rotate-array-by-n-elements-1587115621/1/

#include <bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, min_index = 0;
        cin >> n;

        int A[n];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
            if (i > 0 && a[i] < a[i - 1])
                min_index = i;
        }
        cout << min_index << endl;
    }
}

// 25
// 1 2 4 8 9 14 14 25 30 40 41 52 58 59 59 61 63 64 66 78 78 79 88 89 1
