#include<bits/stdc++.h>
using namespace std;
main(){
    int t;
    cin>>t;
    while(t--){
       int m,n;
       cin>>m>>n;
       
       int A[m][n], C[m];
       for(int i = 0; i<m; i++){
       		for(int j = 0; j<n; j++){
       			cin>>A[i][j];
			}
		C[i] = count(A[i], A[i]+n, 1);
	   }
	   cout<<distance(C, max_element(C, C + m))<<endl;
    }
}
