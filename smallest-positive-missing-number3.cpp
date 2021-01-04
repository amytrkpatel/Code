#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		
		int arr[n], max=0;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			if(max < arr[i]){		//found max in the array O(n)
				max = arr[i];
			}
		}
		
		int p[max], k=0;
		for(int i = 0; i < max ;i++){		//created an array of size max with initialise 0
			p[i]=0;
		}
		
		for(int i = 0; i < n; i++){
			if(arr[i]>=0){
				p[arr[i]]=1;
				k++;
			}
		}
		
		for(int i=1;i<=k+1;i++){
			/*if(p[i]!=1){
				cout<<i<<"\n"; 
				break;
		 	}*/
		 	cout<<p[i]<<" ";
		}
	} 
}
