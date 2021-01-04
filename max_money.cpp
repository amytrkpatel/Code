#include<bits/stdc++.h>
using namespace std;
main(){
    int t;
    cin>>t;
    while(t--){
       int n, money;
       cin>>n>>money;
       if(n%2 != 0){ //odd
       		cout<<(((n*money)/2)+n);
	   }
	   else
	   		cout<<((n*money)/2);
    }
}
