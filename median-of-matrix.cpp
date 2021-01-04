/* Median of a sorted matrix is calculated as: When m,n is odd then median = mat[m/2][n/2] */

//Way1
#include<bits/stdc++.h>
using namespace std;
main(){
    int t;
    cin>>t;
    while(t--){
       int m,n;
       cin>>m>>n;
       
       int A[m][n];
       for(int i = 0; i<m; i++){
       		for(int j = 0; j<n; j++){
       			cin>>A[i][j];
			}
		}
		
		int median = A[m/2][n/2];
		cout<<median<<endl;
	}
}

//Way2
#include<bits/stdc++.h>
using namespace std;
main(){
    int t;
    cin>>t;
    while(t--){
       int m,n;
       cin>>m>>n;
       
       int A[m*n];
       for(int i = 0; i< m*n ; i++){
           cin>>A[i];
	    }
	   cout<<A[(m*n)/2]<<endl;
	}
}
