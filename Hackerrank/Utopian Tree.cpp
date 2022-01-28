//https://www.hackerrank.com/challenges/utopian-tree/problem

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,N,H = 1;
    cin>>t;
    while(t){
        cout<<"\nEnter cycles:";
        cin>>N;
        int c=0,summer = 0, spring =1;
        for(int i=0;i<N ;i++){
                cout<<"\nEntered For loop: Checked!";
                cout<<"\nSpring: "<<spring;
                spring=spring*2;
                c++;
                cout<<"\nCount:"<<c;
                cout<<"\nSpring updated: "<<spring;
                summer = summer + spring;
                if(N==c)
                    break;
                cout<<"\nSummer: "<<summer;
                summer += 1;
                c++;
                cout<<"\nCount: "<<c;
                cout<<"\nSummer updated: "<<summer;
                spring = summer + spring;
                if(N==c)
                    break;
        }
        if(N==0)
            cout<<H<<endl;
        else if((N%2==0)&&N>0)
        {
            cout<<spring<<endl;
        }
        else
        {
            cout<<summer<<endl;
        }
        t--;
    }
}
