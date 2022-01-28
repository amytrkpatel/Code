#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned int n,m,x=1,c=0;
    cin>>n>>m;
    unsigned int A[n], B[m];
    for(int i=1;i<=n;i++){
      cin>>A[i];
    }
    for(int j=1;j<=m;j++){
        cin>>B[j];
    }
    unsigned i=1,j=1;
    while(i!=n || j!=m){

        c++;
        i++;
        j++;
    }
    cout<<c;
    return 0;
}
