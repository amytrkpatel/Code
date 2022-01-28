// https://practice.geeksforgeeks.org/problems/count-the-elements1529/1

#include <bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q, x, count = 0;
        cin >> n;
        int A[n], B[n];
        for (int i = 0; i < n; i++)
        { // A
            cin >> A[i];
        }
        for (int i = 0; i < n; i++)
        { // B
            cin >> B[i];
        }

        sort(B, B + n);

        cin >> q; // q number of queries
        for (int i = 0; i < q; i++)
        {
            cin >> x;
            count = (upper_bound(B, B + n, A[x]) - B);
            cout << count << endl;
        }
    }
}
