// https://practice.geeksforgeeks.org/problems/subarray-range-with-given-sum2804/1/
#include <bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, s, flag = 0;
		cin >> n;
		cin >> s;

		int A[n];
		for (int i = 0; i < n; i++)
		{
			cin >> A[i];
		}

		int sum = 0, right = 0, left = 0;

		while (right < n)
		{

			sum += A[right];

			while (left < right && sum > s)
			{
				sum -= A[left++];
			}

			if (sum == s)
			{
				flag = 1;
				cout << "\n\nPositions are: " << left + 1 << "-" << right + 1 << endl;
				break;
			}
			right++;
		}
		if (flag == 0)
			cout << "\n\nReturning " << -1 << endl;
	}
}
