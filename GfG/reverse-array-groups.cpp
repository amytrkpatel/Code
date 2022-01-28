// https://practice.geeksforgeeks.org/problems/reverse-array-in-groups0255/1

#include <bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int A[n];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }

        int l = n / k;
        int j = 0;
        for (; l > 0; l--, j += k)
        {
            reverse(A + j, A + j + k);
        }

        int m = n % k;
        reverse(A + j, A + j + m);

        for (int i = 0; i < n; i++)
        {
            cout << A[i] << " ";
        }
    }
}

/*vector<long long> reverseInGroups(vector<long long> mv, int n, int k){
    if( k == 1)
        return mv;
    else if(k == n){
        reverse(mv.begin(), mv.end());
    }
    else{
        int stop = floor(n/k);
        int i = 0;
        for(int count = 0; count < stop; count++, i += 3){
            reverse(mv.begin()+i, mv.begin()+i+k);
        }
        reverse(mv.begin()+i, mv.end());
        return mv;
    }
}*/
