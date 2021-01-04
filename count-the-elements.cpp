#include<bits/stdc++.h> //gives TLE
using namespace std;
main(){
    int t;
    cin>>t;
    while(t--){
       int n, q;
       cin>>n;
       int A[n], B[n];
       for(int i = 0; i<n; i++){ 		//A
           cin>>A[i];
       }
       for(int i = 0; i<n; i++){		//B
           cin>>B[i];
       }
       
       cin>>q;							//q number of queries
       int Q[q];						//Q array to store them
       for(int i = 0; i<q; i++){
           cin>>Q[i];
       }
       
       int ctr = 0;
       for(int i = 0, j = 0; j<q;){
           if(B[i] <= A[Q[j]]){
               ctr++;
               i++;
               if(i == n){
                   cout<<ctr<<endl;
                   ctr = 0;
                   i = 0;
                   j++;
               }
           }
       }
    }
}
