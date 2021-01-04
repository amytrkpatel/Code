#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
	    int n, s = 0;
	    cin>>n;
	    do{
	        s = s + n%10;
            n = n/10;
	    }while( n!=0 || s >= 10);
	    cout<<s<<endl;
	}
}
