#include<bits/stdc++.h>
using namespace std;
main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int64_t v[n];
	    for(int i= 0; i<n; i++){
	        cin>>v[i];
	    }
        sort(v, v+n);
        /*cout<<"\n\n";
        for(int i= 0; i<n; i++){
	        cout<<v[i]<<" ";
	    }
	    cout<<"\n\n";
        if((v[0]*v[1])>(v[n-1]*v[n-2]))
        {
            cout<<(v[0]*v[1]*v[n-1])<<"\n";
        }
        else*/
        if((v[0]*v[1]*v[n-1])>(v[n-3]*v[n-2]*v[n-1])){
            cout<<(v[0]*v[1]*v[n-1])<<"\n";
        }
        else
            cout<<(v[n-1]*v[n-2]*v[n-3])<<"\n";
	}
}
