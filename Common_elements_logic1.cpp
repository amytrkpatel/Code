#include <bits/stdc++.h>
#include <cstdint>
using namespace std;
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, m, n, flag = 0;
        cin >> l >> m >> n;
        int64_t A[l], B[m], C[n];
        int64_t max1 = 0, max2 = 0, max3 = 0;
        for (int i = 0; i < l; i++)
        {
            cin >> A[i];
            if (A[i] >= max1)
                max1 = A[i];
        }

        for (int i = 0; i < m; i++)
        {
            cin >> B[i];
            if (B[i] >= max2)
                max2 = B[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> C[i];
            if (C[i] >= max3)
                max3 = C[i];
        }

        int64_t bada, M[] = {max1, max2, max3};
        bada = *max_element(M, M + 3);

        int v[bada];
        for (int64_t i = 0; i < bada; i++)
        {
            v[i] = 0;
        }
        for (int64_t i = 0; i < l; i++)
        {
            if (A[i] == A[i + 1])
                continue;
            v[A[i]]++;
        }
        for (int64_t i = 0; i < m; i++)
        {
            if (B[i] == B[i + 1])
                continue;
            v[B[i]]++;
        }
        for (int64_t i = 0; i < n; i++)
        {
            if (C[i] == C[i + 1])
                continue;
            v[C[i]]++;
        }
        for (int64_t i = 0; i < bada; i++)
        {
            if (v[i] >= 3)
            {
                cout << i << " ";
                flag++;
            }
        }
        if (flag == 0)
            cout << -1;
        cout << "\n";
    }
}
