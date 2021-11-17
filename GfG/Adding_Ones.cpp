//https://practice.geeksforgeeks.org/problems/adding-ones/0

#include<bits/stdc++.h>
using namespace std;
main(){
    int t;
    cin>>t;
    while(t--){
        int n, k, i, j;
        cin>>n>>k;
        int A[n], P[k];
        for(i=1; i<=n; i++)
        {
            A[i] = 0;
        }
        for(j=1; j<=k; j++)
        {
            cin>>P[j];
        }


        for(j=1; j<=k; j++)
        {
            for(int l = 1; l<=n; l++){
                if(l>=P[j]){
                    A[l] = A[l] + 1 ;
                }
            }
        }


        for(i=1; i<=n; i++)
        {
            cout<<A[i]<<" ";
        }
        cout<<"\n";
    }
}
