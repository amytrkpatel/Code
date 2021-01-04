#include<bits/stdc++.h>
using namespace std;
main(){
    int t;
    cin>>t;
    while(t--){
    	int n;
    	cin>>n
    	
    	int stock[n];
		int span[n];
    	
    	for(int i = 0; i< n; i++){
    		int ctr = 0;
    		cin>>stock[i];
    		if(i==0){
    			span[i] = 1;
			}
			else{
				for(int j = 0; j < i; j++){
					if(stock[j]<=stock[i]){
						ctr++;
					}
				}
				span[i] = ctr;	
			} 
		}
		for(int i = 0; i< n; i++){
    		cout<<span[i]<<" ";
		}
		cout<<endl;
	}
}
