// https://practice.geeksforgeeks.org/problems/find-duplicates-under-given-constraints0856/1

#include <bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int a[10];
		for (int i = 0; i < 10; i++)
		{
			cin >> a[i];
		}
		sort(a, a + 10);

		for (int i = 0; i < 10; i++)
		{
			if (a[i] == a[i + 1] && a[i] == a[i + 3])
			{
				cout << a[i] << endl;
				break;
			}
		}
	}
}
