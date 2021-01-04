#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,z,q,y;
    vector<int>v;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>z;
        v.push_back(z);
    }
    vector<int>::iterator low;
    cin>>q;
    while(q!=0){
        cin>>y;
        low=(lower_bound(v.begin(),v.end(),y));
        if(v[low-v.begin()]==y){
            cout<<"Yes "<<(low-v.begin())+1<<endl;
        }
        else{
            cout<<"No "<<(low-v.begin())+1<<endl;
            }
            q--;
        }
    return 0;
}

