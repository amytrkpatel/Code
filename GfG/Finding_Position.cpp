// https://practice.geeksforgeeks.org/problems/finding-position2223/1
#include <bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, nextpwr;
        cin >> n;
        nextpwr = ceil(log2(n));
        if (n <= pow(2, nextpwr))
            cout << pow(2, nextpwr - 1);
    }
}
