// https://medium.com/javarevisited/maximum-difference-between-two-indices-coding-interview-sorting-30-days-preparation-plan-1b194c54fff7

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
		{
			cin >> A[i];
		}

		int minAindex[n];
		minAindex[0] = 0;

		for (int i = 1; i < n; i++)
		{
			minAindex[i] = A[i] < A[minAindex[i - 1]] ? i : minAindex[i - 1];
		}

		int maxAindex[n];
		maxAindex[n - 1] = n - 1;

		for (int i = n - 1; i > 0; i--)
		{
			maxAindex[i - 1] = A[i - 1] > A[maxAindex[i]] ? i - 1 : maxAindex[i];
		}

		int indexDifferenceMax = 0;
		for (int i = 0, j = 0; i < n && j < n;)
		{
			if (A[minAindex[i]] <= A[maxAindex[j]])
			{
				indexDifferenceMax = max(indexDifferenceMax, j - i);
				j++;
			}
			else
			{
				i++;
			}
		}
		cout << indexDifferenceMax << endl;
	}
}
