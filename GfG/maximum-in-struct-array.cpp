// https://practice.geeksforgeeks.org/problems/maximum-in-struct-array/1

#include <bits/stdc++.h>
using namespace std;
struct Height
{
	int feet;
	int inches;
};
int findMax(Height arr[], int n);
// driver program
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, tmp1, tmp2;
		cin >> n;
		Height arr[n];
		for (int i = 0; i < n; i++)
		{
			cin >> tmp1 >> tmp2;
			arr[i] = {tmp1, tmp2};
		}
		int res = findMax(arr, n);
		cout << res << endl;
	}
	return 0;
}
}

/*
Structure of the element of the array is as
struct Height {
	int feet;
	int inches;
};
*/

int findMax(Height arr[], int n)
{
	int temp, maxHeight = 0;
	for (int i = 0; i < n; i++)
	{
		temp = (arr[i].feet * 12) + (arr[i].inches);
		if (maxHeight < temp)
			maxHeight = temp;
	}
	return maxHeight;
}
