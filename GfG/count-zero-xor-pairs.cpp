// https://practice.geeksforgeeks.org/problems/counts-zeros-xor-pairs0349/1/

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

		sort(A, A + n);

		/*int sum = 0;
		int cnt = 1;
		for(int i=1; i<n; i++){
			if(A[i] == A[i-1])
				cnt += 1;
			else{
				sum += (cnt * (cnt-1))/2;
				cnt= 1;
			}
		}
		sum += (cnt * (cnt-1))/2;
		cout<<sum<<endl;*/
		int count = 0;
		for (int j = 0; j < n - 1; j++)
		{
			for (int k = j; k < n - 1; k++)
			{
				if ((A[j] ^ A[k + 1]) == 0)
				{
					count++;
				}
			}
		}
		cout << count << endl;
	}
}
