//https://www.geeksforgeeks.org/smallest-number-divisible-first-n-numbers/

#include <bits/stdc++.h>
using namespace std;

long long getSmallestDivNum(long long n);

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<getSmallestDivNum(n)<<endl;
	}
	return 0;
	
}// } Driver Code Ends

long long getSmallestDivNum(long long n){ //Calculating lcm of i and solution
	long long sol = 1;
	for(long long i = 1; i <= n; i++){
	   	sol = (sol * i)/(__gcd(sol, i));
		}
	return sol;
}

