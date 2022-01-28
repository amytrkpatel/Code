// https://practice.geeksforgeeks.org/problems/facing-the-sun2126/1
#include <bits/stdc++.h>
using namespace std;
main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int n, ctr = 0;
      cin >> n;
      int B[n] = {0};
      int max = B[0];
      for (int i = 0; i < n; i++)
      {
         cin >> B[i];
         if (B[i] > max)
         {
            ctr++;
            max = B[i];
         }
      }
      cout << ctr << endl;
   }
}
