#include<iostream>
using namespace std;
int main()
{
    int t,n,i,j,a[200],m,temp,k,x;
    cin>>t;
    while(t>0)
    {   m=0,x=0;
        cin>>n;
        k=n;
        for(i=0;i<3;i++)
       {
        a[i]=n%10;
        n/=10;
        m++;
        if(n==0)
            break;
        }
        for(i=0;i<3;i++)
        cout<<"\n";
        cout<<a[i];
        cout<<"\n"<<m;
        while(k>=1)
        {
            temp=0,j=0;
        while(j<=m)
        {
            k--;
            x=(a[j]*k)+temp;
            a[j]=x%10;
            temp=x/10;
            j++;
        }
        while(temp>0)
        {
            a[j]=temp%10;
            temp/=10;
            j++;
            m++;
        }
        }
        for(i=(m-1);i>=0;i--)
        {
            cout<<a[i];
        }
        t--;
    }
}
