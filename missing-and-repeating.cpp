#include<bits/stdc++.h>
using namespace std;
main(){
    int t;
    cin>>t;
    while(t--){
       int n, val, m, r;
       cin>>n;
       
       vector<int> a;
       
       for(int i = 0; i<n; i++){
       		cin>>val;
       		a.push_back(val);
	   }
	   
	   sort( a.begin(), a.end() );
	   
	   /*val = a[n-1] + 1;
	   a.push_back(val);*/
	   
	   	for(int i = 0; i<n-1; i++){
	   		if( (a[i+1]-a[i]) == 2){
	   			m = a[i] + 1;
	   			break;
			}
			else if( (a[i+1]-a[i]) == 0 &&  i+1 == n-1 ){
				m = a[i] + 1;
			}
	   	}
	   	
	   	if(a[0] == a[1])
	   		m = a[1] - 1;
	   	
		for(int i = 0; i<n; i++){
	   		if( a[i+1] == a[i] ){
	   			r = a[i];
	   			break;
			}
	   	}
	   
	   cout<<r<<" "<<m<<endl;
    }
}
