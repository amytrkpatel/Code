#include<bits/stdc++.h>
using namespace std;
main(){
    int t;
    cin>>t;
    while(t--){
        int l,m,n,i=0,flag=0, x=0;

        cin>>l>>m>>n;

        int f=l+m+n;
        int64_t A[f];

        for(int i=0; i<f; i++){
            cin>>A[i];
        }

        sort(A,A+f);

        for(int i=0;i<f;i++){
            if(x==A[i+1])
                continue;
            if(A[i]==A[i+1]){
                flag++;
            }
            if(flag==2){
                x= A[i];
                cout<<A[i]<<" ";
                flag = 0;
            }
        }
    }
}
