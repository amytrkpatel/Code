#include<bits/stdc++.h>
using namespace std;
main(){
    int t;
    cin>>t;
    while(t--){
       int n, flag = 0;
       cin>>n;
       
       int A[n];
       for(int i =0; i<n; i++){
       		cin>>A[i];
	   }
	   
	   cout<<"\nSorted Array is: ";
	   sort(A, A+n);
	   for(int i = 0; i<n; i++){
	   		cout<<A[i]<<" ";
	   }
	   
	   vector <int> B(n+1,-1);
	   
	   for(int i = 0; i<n; i++){
	   		if(A[i]>=0){
	   			B[A[i]] = A[i];
			}
	   }
	   
	   cout<<"\nAfter Index manipulation,\nArray is: ";
	   for(int i = 1; i<n+1; i++){
	   		cout<<B[i]<<" ";
	   }
	   
	   for(int i = 1; i<=n+1; i++){
	   		if(B[i] != i){
	   			flag = 1;
	   			cout<<"\nMissing is :"<<i<<" with flag = "<<flag<<endl;
				break;	
			}
	   }
	   /*
	   if( flag == 0){
	   		cout<<"\nMissing is :"<<A[n-1]+1<<" with flag = "<<flag<<endl;
	   }*/
	}
}
