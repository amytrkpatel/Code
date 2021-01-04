#include<bits/stdc++.h>
using namespace std;
main(){
    int t;
    cin>>t;
    while(t--){
       int n, val, e = 0;
       cin>>n;
       
       /*int A[n];
       for(int i = 0; i<n; i++){
       		A[i] = 0;
	   }*/
	   
	   vector <int> A(n,0);
	   vector <int> B;
	   for(int i = 0; i<n; i++){
       		cin>>val;
       		B.push_back(val);
	   }
	   
	   for(auto i = B.begin(); i != B.end(); i++){ 
	        if (*i % 2 == 0){
	        	A[e] = *i;
	            B.erase(i); 
	            i--;
	            e += 2;
	        }
    	}
    	
    	int k = 0;
    	for(auto j = A.begin(); j != A.end(); j++){ 
	        if (*j == 0){
	        	*j = B[k];
	            k++;
	        }
    	}
    	
	   
	   for(int i = 0; i<n; i++)
	   		cout<<A[i]<<" ";
		cout<<endl;
    }
}
