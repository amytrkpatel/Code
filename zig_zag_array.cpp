#include<bits/stdc++.h>
using namespace std;
main(){
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       int arr[n];
       for(int i=0;i<n;i++)
	   		cin>>arr[i];
		bool flag = true; 
    	for (int i=0; i<=n-2; i++) { 
        	if (flag)  /* "<" relation expected */
        	{ 
            	/* If we have a situation like A > B > C, 
               	we get A > B < C by swapping B and C */
            	if (arr[i] > arr[i+1]) 
                	swap(arr[i], arr[i+1]); 
        	} 
        	else /* ">" relation expected */
        	{ 
            	/* If we have a situation like A < B < C, 
               	we get A < C > B by swapping B and C */
            	if (arr[i] < arr[i+1]) 
                	swap(arr[i], arr[i+1]); 
        	}		 
        	flag = !flag; /* flip flag */
    	}
    	for (int i=0; i<n; i++) 
        cout << arr[i] << "  ";
    }
}
