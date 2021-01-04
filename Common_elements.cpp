#include<bits/stdc++.h>
#include <cstdint>
using namespace std;
main(){
    int t;
    cin>>t;
    while(t--){
        int l,m,n;
        cin>>l>>m>>n;
        int64_t A[l],B[m],C[n];
        int64_t max1=0,max2=0,max3=0;
        for(int i=0; i<l; i++){
            cin>>A[l];
            if(A[l]>=max1)
                max1 = A[l];
        }

        for(int i=0; i<m; i++){
            cin>>B[m];
            if(B[m]>=max2)
                max2 = B[m];
        }

        for(int i=0; i<n; i++){
            cin>>C[n];
            if(C[n]>=max3)
                max3 = C[n];
        }

        int64_t bada, M[] = {max1, max2, max3};
        bada = *max_element(M, M+3);

        int v[bada];
        for(int64_t i =0; i<bada; i++)
        {
            v[i] = 0;
        }
        for(int64_t i=0; i<l; i++){
            v[A[i]]++;
        }
        for(int64_t i=0; i<m; i++){
            v[B[i]]++;
        }
        for(int64_t i=0; i<m; i++){
            v[C[i]]++;
        }
        for(int64_t i =0; i<bada; i++)
        {
            if(v[i]==3)
                cout<<v[i];
        }
    }
}
