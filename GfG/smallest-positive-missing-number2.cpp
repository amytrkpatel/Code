// https://practice.geeksforgeeks.org/problems/smallest-positive-missing-number-1587115621/1

#include <bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, flag = 0;
		cin >> n;

		int A[n];
		for (int i = 0; i < n; i++)
		{
			cin >> A[i];
		}

		cout << "\nSorted Array is: ";
		sort(A, A + n);
		for (int i = 0; i < n; i++)
		{
			cout << A[i] << " ";
		}

		for (int i = 0; i < n; i++)
		{
			if (A[i] >= 0)
			{
				A[A[i] - 1] = A[i];
			}
		}

		cout << "\nAfter Index manipulation,\nArray is: ";
		for (int i = 0; i < n; i++)
		{
			cout << A[i] << " ";
		}

		for (int i = 0; i < n; i++)
		{
			if (A[i] != (i + 1))
			{
				flag = 1;
				cout << "\nMissing is :" << i + 1 << " with flag = " << flag << endl;
				break;
			}
		}

		if (flag == 0)
		{
			cout << "\nMissing is :" << A[n - 1] + 1 << " with flag = " << flag << endl;
		}
	}
}
