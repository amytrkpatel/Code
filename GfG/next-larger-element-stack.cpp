// https://practice.geeksforgeeks.org/problems/next-larger-element-1587115620/1

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
		vector<int> a(n), sol(n);

		for (int i = 0; i < n; i++)
			cin >> a[i];

		stack<int> s;
		for (int i = n - 1; i >= 0; i--)
		{
			while (!s.empty() && a[i] >= s.top())
				s.pop();
			sol[i] = s.empty() ? -1 : s.top();
			s.push(a[i]);
		}

		for (int i = 0; i < n; i++)
			cout << sol[i] << " ";
		cout << endl;
	}
}
