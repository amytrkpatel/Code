// https://practice.geeksforgeeks.org/problems/equilibrium-point-1587115620/1
#include <bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, ls = 0, rs = 0, flag = 0;
		cin >> n;
		int A[n];
		for (int i = 0; i < n; i++)
		{
			cin >> A[i];
			ls += A[i];
		}

		for (int i = n - 1; i >= 0; i--)
		{
			rs += A[i];
			if (ls == rs)
			{
				cout << i + 1 << endl;
				flag = 1;
				break;
			}
			ls -= A[i];
		}

		if (flag == 0)
			cout << -1 << endl;
	}
}
