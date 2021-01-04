#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int64_t  s, t, a, b, m, n, d;
    int ca=0, co=0;
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;
    vector <int64_t> dapple;
    for(int i=0;i<m;i++){
        int valued;
        cin>>valued;
        dapple.push_back(valued);
    }
    vector <int64_t> dorange;
    for(int i=0;i<n;i++){
        int valued;
        cin>>valued;
        dorange.push_back(valued);
    }
    if(s>a && t>s && b>t)
    {
        for(int i=0;i<m;i++){
            if(dapple[i]>0 && ((a+dapple[i])>=s && (a+dapple[i])<=t))
            {
              ca++;
            }
        }
        for(int i=0;i<n;i++){
            if(dorange[i]<0 && ((b+dorange[i])>=s && (b+dorange[i])<=t))
            {
              co++;
            }
        }
    }
    cout<<ca<<"\n"<<co;
    return 0;
}

