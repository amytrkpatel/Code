#include<bits/stdc++.h>
using namespace std;
main(){
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       vector<int> a;
       
	   for(int i=0; i<n; i++){
	       int x;
	       cin>>x;
	       a.push_back(x);
	   }
       cout<<*min_element(a.begin(),a.end())<<" "<<*max_element(a.begin(),a.end())<<"\n";
    }
}
