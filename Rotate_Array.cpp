#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, d;
    cin>>t;
    while(t!=0)
    {
        cin>>n>>d;
        int arr[n+d];
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        for(int i=0; i<d; i++)
        {
            arr[n+i] = arr[i];
        }
        for(int j=d;j<n+d;j++)
        {
            cout<<arr[j]<<" ";
        }
        t--;
    }
	return 0;
}
