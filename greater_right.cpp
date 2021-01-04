#include<iostream>
using namespace std;
int main()
 {
	int t,n;
	cin>>t;
	while(t--){
	   cin>>n;
	   int a[n];
	   for(int i = 0; i < n; i++){
	       cin>>a[i];
	   }
	   
	  /* int max = 0;
	   
	   for(int i = 0; i<n; i++){
	       for(int j = i+1, max = a[j]; j<n; j++){
	           if(a[j]>max)
	                max = a[j];
	       }
	       a[i] = max;
	   }
	   */
	   for(int i = 0; i< n; i++){
	       cout<<a[i]<<" ";
	   }
	   cout<<"\n";
	}
	return 0;
}
