// https://www.geeksforgeeks.org/rotate-a-matrix-by-90-degree-in-clockwise-direction-without-using-any-extra-space/
#include <bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, val;
        cin >> n;

        vector<vector<int>> mtrx;

        for (int i = 0; i < n; i++)
        {
            mtrx.push_back(vector<int>());
            for (int j = 0; j < n; j++)
            {
                cin >> val;
                mtrx[i].push_back(val);
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = n - 1; j >= 0; j--)
            {
                cout << mtrx[j][i] << " ";
            }
        }
        cout << endl;
    }
}
