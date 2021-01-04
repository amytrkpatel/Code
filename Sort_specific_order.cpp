/*the first part of the array contains odd numbers sorted in descending order, 
rest portion contains even numbers sorted in ascending order.*/


#include<bits/stdc++.h>
using namespace std;

main(){
    int t;
    cin>>t;
    while(t--){
    	int n;
    	cin>>n;
    	
		int a[n];
    	for(int i =0; i<n; i++)
    		cin>>a[i];
    	
    	vector<int>odd, even;
    	
    	
    	for(int i =0; i<n; i++){
    		if(a[i]%2==0)
    			even.push_back(a[i]);
    		else
    			odd.push_back(a[i]);			
		}
		
		///////////////////////////////////////
		cout <<"\nOdd: ";
		for (int i = 0; i < odd.size(); i++) 
        	cout<<odd[i] << " ";
        
        cout<<"\nEven: ";
		for (int i = 0; i < even.size(); i++) 
        	cout<<even[i] << " ";
		//////////////////////////////////////
		sort(even.begin(),even.end());	//asc
		cout<<"\nEven Asc: ";
		for(int i =0; i<even.size(); i++)
    		cout<<even[i]<<" ";
		
		sort(odd.begin(),odd.end(),greater<int>()); //desc
		cout <<"\nOdd Desc: ";
		for(int i =0; i<odd.size(); i++)
    		cout<<odd[i]<<" ";
		//////////////////////////////////////
		vector<int> v;
		v.reserve(odd.size() + even.size());
		
		v.insert( v.end(), odd.begin(), odd.end() );
		v.insert( v.end(), even.begin(), even.end() );
		
		cout<<"\nSorted array in specific order: ";
    	for(int i =0; i<v.size(); i++)
    		cout<<v[i]<<" ";
    	cout<<"\n";
    }
    
}
