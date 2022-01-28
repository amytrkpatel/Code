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
			if (A[i] < 0)
				A[i] = abs(A[i]);
		}

		sort(A, A + n);

		for (int i = 0; i < n - 1;)
		{
			if (A[i] == A[i + 1])
			{
				flag = 1;
				cout << -A[i] << " " << A[i] << " ";
				i += 2;
			}
			else
				i++;
		}

		if (flag == 0)
			cout << 0 << endl;
		else
			cout << endl;
	}
}
