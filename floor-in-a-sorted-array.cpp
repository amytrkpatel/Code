#include<bits/stdc++.h>
using namespace std;
main(){
    int t;
    cin>>t;
    while(t--){
        int n, x, flr = -1;
        cin>>n>>x;
        int A[n];
        for(int i = 0; i< n; i++){
            cin>>A[i];
            if(A[i] <= x){
                flr = i;
            }
        }
        cout<<flr<<endl;
    }
}

