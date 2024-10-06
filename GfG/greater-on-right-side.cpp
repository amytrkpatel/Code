// https://practice.geeksforgeeks.org/problems/greater-on-right-side4305/1

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
        int A[n];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        for (int i = 0; i < n; i++)
        {
            int max = 0;
            for (int j = i + 1; j < n; j++)
            {
                if (A[j] >= max)
                {
                    max = A[j];
                }
                A[i] = max;
            }
        }
        A[n - 1] = -1;
        for (int i = 0; i < n; i++)
        {
            cout << A[i] << " ";
        }
        cout << "\n";
    }
}
