// https://practice.geeksforgeeks.org/problems/recamans-sequence4856/1
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
        int arr[n];
        arr[0] = 0;
        cout << arr[0] << " ";
        for (int i = 1; i < n; i++)
        {
            int current = arr[i - 1] - i;
            int j;
            for (j = 0; j < i; j++)
            {
                if ((arr[j] == current) || current < 0)
                {
                    current = arr[i - 1] + i;
                    break;
                }
            }
            arr[i] = current;
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
}
