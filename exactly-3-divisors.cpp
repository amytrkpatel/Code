//https://www.geeksforgeeks.org/numbers-exactly-3-divisors/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int exactly3Divisors(int N){
    
    ll x = sqrt(n);
	bool prime[x+1];
	memset(prime, true, sizeof(prime));
	for(ll i=2;i*i<=x;i++){
		if(prime[i]){
			for(ll j=i*i;j<=x;j+=i)
				prime[j] = false;
		}
	}
	
	ll counter = 0;
	for(ll i=2;i<=x;i++){
		if(prime[i])
			counter++;
	}
    return counter;
}

int main(){
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        cout<<exactly3Divisors(N)<<endl;
    }
	return 0;
}
