// https://practice.geeksforgeeks.org/problems/print-pattern/0/

#include<bits/stdc++.h>
using namespace std;

void oscillate(int N){
	if(N > 0){
		cout<< N <<" ";
		oscillate(N-5);
	}
	cout<< N <<" ";
}

main(){
    int t;
    cin>>t;
    while(t--){
    	int n;
    	cin>>n;
    	oscillate(n);
    	cout<<endl;
    }
}
