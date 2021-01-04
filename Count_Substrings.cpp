#include<bits/stdc++.h>
using namespace std;
main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        int counter = 0;
        cin>>S;
        for(int i=0;S[i]!='\0'; i++)
        {
            if(S[i]=='1')
            {
                for(int j=(i+1);S[j]!='\0'; j++)
                {
                    if(S[j]=='1')
                        counter++;
                }
            }
        }
        cout<<counter<<"\n";
    }
}
