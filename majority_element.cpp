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
	   
	   
	   for (auto const& pair: countA) {
        std::cout << "{" << pair.first << ": " << pair.second << "}\n";
    	}
	   
	   map<int, int>::iterator itr;
	   int flag = 0;
	   
	   for (itr = countA.begin(); itr != countA.end(); ++itr) {
			if( ((itr->second)) > (n/2) ){
	   			cout<<itr->second<<endl;
	   			flag = 1;
				break;
			}
    	}
    	if(flag == 0) cout<<-1<<endl;
	}
}
