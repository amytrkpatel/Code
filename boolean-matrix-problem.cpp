//https://practice.geeksforgeeks.org/problems/boolean-matrix-problem-1587115620/1

#include<bits/stdc++.h>
using namespace std;
main(){
    int t;
    cin>>t;
    while(t--){
       int m,n;
       cin>>m>>n;
       
       int A[m][n], row[m] = {0}, col[n] = {0};
       for(int i = 0; i<m; i++){
       		for(int j = 0; j<n; j++){
       			cin>>A[i][j];
			}
	   }
	   
	   for(int i = 0; i<m; i++){
	   		for(int j = 0; j<n; j++){
       			if(A[i][j] == 1){
       				row[i] = 1;
       				col[j] = 1;
				}
			}
	   }
	   
	   
	   for(int i = 0; i<m; i++){
	   		for(int j = 0; j<n; j++){
       			if(row[i] == 1 || col[j] == 1){
       				A[i][j] = 1;
				}
			}
	   }
	   
	   for(int i = 0; i<m; i++){
       		for(int j = 0; j<n; j++){
       			cout<<A[i][j]<<" ";
			}
			cout<<"\n";
	   }
    }
}
