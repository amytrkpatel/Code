// https://practice.geeksforgeeks.org/problems/next-larger-element-1587115620/1
#include <bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, x;
		cin >> n;

		vector<int> s;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			s.push_back(x);
		}

		vector<int> nextGreater(n, -1);

		for (int i = 0; i < n - 1; i++)
		{ // n^2 time complexity
			for (int j = i + 1; j < n; j++)
			{
				if (s[j] > s[i])
				{
					nextGreater[i] = s[j];
					break;
				}
			}
		}

		for (int i = 0; i < n; i++)
		{
			cout << nextGreater[i] << " ";
		}
		cout << endl;
	}
}
