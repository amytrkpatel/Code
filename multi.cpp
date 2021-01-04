#include<iostream>
using namespace std;
int main()
{
    int a[10],i,n,m=0,temp;
    cout<<"\nEnter the number1:";
    cin>>n;
    for(i=0;i<10;i++)
    {
        a[i]=n%10;
        n/=10;
        m++;
        if(n==0)
            break;

    }
    for(i=0;i<m;i++)
        cout<<a[i];
}
