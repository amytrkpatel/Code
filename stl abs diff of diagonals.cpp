#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,d1=0,d2=0;
    cin>>n;
    int matrix[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {   cout<<"\n";
            cin>>matrix[i][j];
            if(i==j)
            {   cout<<"\n"<<matrix[i][j];
                d1=d1+matrix[i][j];
            }
            if((i+j)==(n-1))
            {
                cout<<"\n"<<matrix[i][j];
                d2= d2 + matrix[i][j];
            }
        }

    }
    cout<<"\nLeading Diagonal: "<<d1;
    cout<<"\nTrailing Diagonal: "<<d2;
    cout<<"\nAbsolute difference between the diagonals: "<<abs(d1-d2);

    return 0;
}
