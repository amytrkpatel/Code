//https://www.spoj.com/problems/ADDREV/
/*For each case, print exactly one line containing only one integer - the reversed sum of two reversed numbers. Omit any leading zeros in the output.*/

#include<bits/stdc++.h>
using namespace std;
long reversed(long in){
    long out = 0;
    while(in)
    {
        out *= 10;
        out += in % 10;
        in /= 10;
    }
    return out;
}
int main()
{
    long t, n1, n2;
    long rn1, rn2, rno;
    cin>>t;
    while(t--){
        cin>>n1>>n2;
        rn1 = reversed(n1);
        rn2 = reversed(n2);
        rno = reversed(rn1 + rn2);
        cout<<rno<<"\n";
    }
	return 0;
}
