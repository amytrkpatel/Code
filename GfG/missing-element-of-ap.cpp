// https://practice.geeksforgeeks.org/problems/missing-element-of-ap2228/1

#include <iostream>
using namespace std;
main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		int ap[n];
		int sum = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> ap[i];
			sum += ap[i];
		}
		int total = (n + 1) * (ap[0] + ap[n - 1]) / 2;
		cout << total - sum << endl;
	}
}
