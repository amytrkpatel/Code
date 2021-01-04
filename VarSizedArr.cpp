#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>vec;
    int n,q,x,i;
    cin>>n>>q;
    while(n!=0)
    {   cin>>x;
        vec.push_back(x);
        for(i=1;i<=vec[0];i++)
        {
            cin>>x;
            vec.push_back(x);
        }
        n--;
    }

}



/*The first line consists of NN and QQ separated by a space.

The following NN lines contain sequences in this format: "kk s0s0 s1s1 s2s2...... sk−1sk−1"

The following QQ lines contain queries in this format: "aa bb".*/
