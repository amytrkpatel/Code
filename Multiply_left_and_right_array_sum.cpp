#include<bits/stdc++.h>
using namespace std;
main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int v[n], mid,Lsum = 0,Rsum = 0,Product = 0;
        mid = n/2;
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        for(int j=0; j<mid; j++){
            Lsum = Lsum + v[j];
        }
        for(int j=mid; j<n; j++){
            Rsum = Rsum + v[j];
        }
        Product = Lsum * Rsum;
        cout<<Product<<"\n";
    }
}
