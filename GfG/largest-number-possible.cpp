// https://practice.geeksforgeeks.org/problems/largest-number-possible5028/1

/*#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n, s;

		cin>>n>>s;

		int A[n];

		int def = 9;

		for(int i = 0; i < n; i++){
			if(s >= def){
				A[i] = def;
				s -= def;
			}
			else
				A[i] = s;
		}

		for(int i = 0; i < n; i++){
			cout<<A[i];
		}
		cout<<endl;
	}
}*/

#include <iostream>
using namespace std;
int main()
{
	int t, n, k, i;
	cin >> t;
	while (t > 0)
	{
		cin >> n;
		cin >> k;
		if (k > n * 9 || (k == 0 && n > 1))
		{
			cout << -1;
		}
		else
		{
			while (n >= 1)
			{
				if (k >= 9)
				{
					cout << 9;
					k = k - 9;
				}
				else if (k == 0)
				{
					cout << 0;
				}
				else
				{
					cout << k;
					k = 0;
				}
				n--;
			}
		}
		cout << endl;
		t--;
	}
	return 0;
}
