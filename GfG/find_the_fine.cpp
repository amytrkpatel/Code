// https://practice.geeksforgeeks.org/problems/find-the-fine4353/1

#include <bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, d, fine = 0;
		cin >> n >> d;
		int car[n], penalty[n];
		for (int i = 0; i < n; i++)
		{
			cin >> car[i] >> penalty[i]; // lets check if it works
		}
		if (d % 2 == 0)
		{ // even
			for (int i = 0; i < n; i++)
			{
				if (car[i] % 2 != 0)
				{							  // car is odd
					fine = fine + penalty[i]; // collect fine
				}
			}
		}
		else
		{ // odd
			for (int i = 0; i < n; i++)
			{
				if (car[i] % 2 == 0)
				{							  // car is odd
					fine = fine + penalty[i]; // collect fine
				}
			}
		}
		cout << fine;
		/*cout<<"\nCar number: ";
		for(int i=0; i<n; i++){
			cout<<car[i]<<" ";
		}
		cout<<"\nPenalty: ";
		for(int i=0; i<n; i++){
			cout<<penalty[i]<<" ";
		}*/
	}
	cout << "\n";
}
