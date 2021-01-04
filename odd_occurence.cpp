#include<bits/stdc++.h>
using namespace std;
main(){
    int t;
    cin>>t;
    while(t--){
       int n, val;
       cin>>n;
       vector<int> A;
       
       for(int i  = 0; i<n; i++){
       		cin>>val;
       		A.push_back(val);
	   }
	   
	   map<int,int> countA;
	   
	   for(auto & elem : A){
	   		auto result = countA.insert(pair<int,int>(elem,1));
	   		if(result.second == false)
	   			result.first->second++;
	   }
	   
	   map<int, int>::iterator itr;
	   int flag = 0;
	   
	   for (itr = countA.begin(); itr != countA.end(); ++itr) {
	   		if( (itr->second) % 2 == 1){
	   			cout<<itr->first<<endl;
	   			flag = 1;
				break;
			}
    	}
    	if(flag == 0)
    	    cout<<0;
	}
}
