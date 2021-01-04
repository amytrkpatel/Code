#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, c, d;
    cin>>t;
    while(t--){
        cin>>a>>b>>c>>d;
        if(a==0||b==0||c==0||d==0||a>10000||b>10000||c>10000||d>10000){
            cout<<"NO";
        }
        else{
            if(a==b){
                if(c==d)
                    cout<<"YES";
            }
            else if(a==c){
                if(b==d)
                    cout<<"YES";
            }
            else if(a==d){
                if(c==b)
                    cout<<"YES";
            }
            else
                cout<<"NO";
        }
    }
}
