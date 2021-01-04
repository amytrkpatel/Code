//https://practice.geeksforgeeks.org/problems/design-a-tiny-url-or-url-shortener/0
#include<bits/stdc++.h>
using namespace std;
main(){
    int t;
    cin>>t;
    while(t--){
    	string db = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    	string url = "";
		
		int n, cn;
		cin>>n;
		cn = n;
		int index = 0;
		
		while(1){
			index = n % 62;
			url += db[index];
			n -= index;
			if( n == 0)
				break;
			n /= 62;
		}
		reverse(url.begin(), url.end());
    	cout<<url<<endl;
    	cout<<cn<<endl;
    }
}
