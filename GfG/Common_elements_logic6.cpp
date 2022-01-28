#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--){
        int n1, n2, n3;
        cin>>n1>>n2>>n3;

        int64_t a[n1], b[n2], c[n3];


        for(int i = 0; i < n1; i++){
            cin>>a[i];
        }

        for(int i = 0; i < n2; i++){
            cin>>b[i];
        }

        for(int i = 0; i < n3; i++){
            cin>>c[i];
        }

        int i = 0, j = 0, k = 0, flag = 0, l = 0;
        int64_t z[l];


        while(i < n1 && j < n2 && k < n3)
        {


            if(a[i]==b[j] && b[j] == c[k] && a[i] == c[k])
            {
                flag = 1;


                z[l]=a[i];
                l++;


                i++;
                j++;
                k++;

            }
            else if (a[i] < b[j])
             i++;

         // y < z
            else if (b[j] < c[k])
             j++;

         // We reach here when x > y and z < y, i.e., z is smallest
            else if(c[k] < a[i])
             k++;



        }
        for(int64_t x = 0; x < l; x++)
        {
            if(x==0){
                cout<<z[x]<<" ";
            }
            else{
                if(z[x] == z[x-1])
                x++;
            else{
                cout<<z[x]<<" ";
                x++;
            }
        }

        }

        if(flag == 0)
        {

            cout<<"-1";
        }
        cout<<"\n";
    }
    return 0;
}

/*
1
7 5 5
1 5 10 20 20 40 80
5 10 20 20 80
6 10 20 20 80
*/
