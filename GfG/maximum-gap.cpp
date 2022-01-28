// https://practice.geeksforgeeks.org/problems/maximum-gap3845/1

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
            cin >> A[i];

        sort(A, A + n);

        cout << "\nSorted array: ";
        for (int i = 0; i < n; i++)
            cout << A[i] << " ";

        vector<int> gap;
        int diff = 0;

        for (int i = 0; i + 1 <= (n - 1); i++)
        {
            diff = abs(A[i + 1] - A[i]);
            gap.push_back(diff);
        }

        /*cout<<"\nGap array: ";
        for(int i = 0; i+1 <= n-1; i++)
           cout<<"\nA["<<i+1<<"] - A["<<i<<"] = "<<A[i+1]<<" - "<<A[i]<<" = "<<gap[i]<<endl;*/

        cout << "\nMax gap: " << *max_element(gap.begin(), gap.end()) << endl;
    }
}
