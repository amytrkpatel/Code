#include<bits/stdc++.h>
using namespace std;
main(){
    int t;
    cin>>t;
    while(t--){
       int n,val;
       cin>>n;
       
       vector<int> A;
       for(int i = 0; i < n ; i++){
       		cin>>val;
       		A.push_back(val);
	   }
	   
	   stack<int> st;
	   
	   st.push(A[n-1]);
	   for(int i = n-2; i>= 0; i--){
	   		if(st.top() <= A[i]){
	   			st.push(A[i]);
			}
	   }
	   
	   while(st.empty()==false){
	   		cout<<st.top()<<" ";
	   		st.pop();
	   }
    }
}
