// https://practice.geeksforgeeks.org/problems/maximum-gap3845/1

#include <bits/stdc++.h>
using namespace std;
main()
{
	int t, n, i, j, temp;
	long int sub;
	cin >> t;
	while (t--)
	{
		cin >> n;
		int arr[n];
		for (i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		sort(arr, arr + n, greater<int>());
		sub = arr[0] - arr[1];
		for (i = 1; i < n - 1; i++)
		{
			if (arr[i] - arr[i + 1] > sub)
			{
				sub = arr[i] - arr[i + 1];
			}
		}
		if (n == 1)
		{
			cout << "0" << endl;
		}
		else
		{
			cout << sub << endl;
		}
	}
}
