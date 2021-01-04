#include<bits/stdc++.h>
using namespace std;
main(){
    int t,n,k;
    cin>>t;
    while(t--){
	cin>>n;
	int A[n];
	for(int i=0; i<n; i++){
	    cin>>A[i];
	}
	cin>>k;
	int fneg;
	for(int j=0, i=0; j<((k-1)+i); j+=i){
        //for(int x=j; j<k+i; x++){
            cout<<A[j]<<" ";
        //}
        i++;
    }
	//break the loop after n-(k-1) iterations
    }
}
