//https://practice.geeksforgeeks.org/problems/arranging-the-array/0

#include<bits/stdc++.h>
#include <cstdint>
using namespace std;
main(){
    int t;
    cin>>t;
    while(t--){
        int n,j=0;
        cin>>n;
        int64_t A[n], Final[n];
        for(int i=0; i<n; i++){
            cin>>A[i];
            if(A[i]<0){
                Final[j] = A[i];
                j++;
            }
        }
        for(int i=0; i<n; i++){
            if(A[i]>=0){
                Final[j] = A[i];
                j++;
            }
        }
        for(int i=0; i<n; i++){
            cout<<Final[i]<<" ";
        }
        cout<<"\n";
    }
}
