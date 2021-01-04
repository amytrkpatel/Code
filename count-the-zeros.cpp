#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    
	    int A[n];
	    for(int i = 0; i< n; i++){
	        cin>>A[i];
	        if(A[i]==0){
	            cout<<n-i<<endl;
	            break;
	        }
	    }
	}
}
