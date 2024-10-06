// C++ program to print common elements in three arrays
#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--){
        int n1, n2, n3;
        cin>>n1>>n2>>n3;
        int ar1[n1], ar2[n2], ar3[n3];


        for(int i=0; i<n1; i++){
            cin>>ar1[n1];
        }

        for(int i=0; i<n2; i++){
            cin>>ar2[n2];
        }

        for(int i=0; i<n3; i++){
            cin>>ar3[n3];
        }


        int i = 0, j = 0, k = 0;

        // Iterate through three arrays while all arrays have elements
        while (i < n1 && j < n2 && k < n3){
                // If x = y and y = z, print any of them and move ahead in all array
                if (ar1[i] == ar2[j] && ar2[j] == ar3[k]){
                    cout << ar1[i] << " ";
                    if(ar1[i+1]==ar2[j]){
                        i += 2;
                    }
                    else if(ar2[j+1]==ar3[k]){
                        j += 2;
                    }
                    else if(ar3[k+1]==ar1[i]){
                        k += 2;
                    }
                    else if(ar1[i+1] == ar2[j+1] && ar2[j+1] == ar3[k+1]){
                        i += 2;
                        j += 2;
                        k += 2;
                    }
                    else
                        i++; j++; k++;
                }
                // x < y
                else if (ar1[i] < ar2[j])
                    i++;
                // y < z
                else if (ar2[j] < ar3[k])
                    j++;
                // We reach here when x > y and z < y, i.e., z is smallest
                else
                    k++;
        }
        cout<<endl;
    }
}
