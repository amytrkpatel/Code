#include<bits/stdc++.h>
using namespace std;
main()
{
    int t,baloons[3],mycount[3];
    long long int m,k;
    cin>>t;
    while(t!=0)
    {
        for(int i=0; i<3; i++)
        {
           cin>>baloons[i];
        }
        cin>>k;

        mycount[0] = count(r.begin(),r.end(),'R');
        cout<<"Reds are:"<<mycount[0]<<endl;
        mycount[1] = count(r.begin(),r.end(),'B');
        cout<<"Blues are:"<<mycount[1]<<endl;
        mycount[2] = count(r.begin(),r.end(),'G');
        cout<<"Greens are:"<<mycount[2]<<endl;
        sort(mycount,mycount+3);
        cout<<"\nn= "<<n;
        cout<<"\nsorted array is:";
        for(int j=0; j<3; j++)
        {
            cout<<mycount[j]<<" ";
        }
        cout<<"\n n-"<<mycount[2]<<"= "<<(n - mycount[2])<<endl;
        r.clear();
        t--;
    }
}
