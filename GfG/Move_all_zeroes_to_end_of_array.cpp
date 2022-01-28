// https://practice.geeksforgeeks.org/problems/move-all-zeroes-to-end-of-array0751/1/

#include <bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k = 0;
        cin >> n;
        int Arr[n], Final[n], zero = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> Arr[i];
            if (Arr[i] != 0)
            {
                Final[k] = Arr[i];
                k++;
            }
            else
                zero++;
        }
        while (zero--)
        {
            Final[k] = 0;
            k++;
        }
        for (int i = 0; i < n; i++)
        {
            cout << Final[i] << " ";
        }
        cout << "\n";
    }
}
