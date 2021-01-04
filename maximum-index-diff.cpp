#include<bits/stdc++.h>
using namespace std;

main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        int A[n];
        for(int i = 0; i <n; i++){
            cin>>A[i];
        }
        
        for(int i = 0, j = n-1; i<j ; i++, j--){
        	if(A[i]<=A[j]){
        		cout<<j-i<<endl;
        		break;	
			}
		}
    }
}
