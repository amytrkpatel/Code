#include<bits/stdc++.h>
using namespace std;
main()
{
    int t, a, b, c, d;
    cin>>t;
    while(t--){
        cin>>a>>b>>c>>d;
        if(a==0||b==0||c==0||d==0||a>1000||b>1000||c>1000||d>1000){
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
