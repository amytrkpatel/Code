// https://practice.geeksforgeeks.org/problems/equilibrium-point-1587115620/1
#include <iostream>
using namespace std;

int equilibriumPoint(long long a[], int n);

int main()
{

    long long t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;
        long long a[n];

        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        cout << equilibriumPoint(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends

// Function to find equilibrium point
// a: input array
// n: size of array
// array: 2 2 = 13
int equilibriumPoint(long long a[], int n)
{
    if (n == 1)
        return n;

    int init_sum = 0, fsum = 0, total = 0;
    for (int i = 0; i < n; i++)
    {
        total += a[i];
    }

    for (int i = 0; i < n; i++)
    {
        fsum += a[i];
        if (fsum + a[i + 1] == total - fsum)
        { // 4 + 5 =  13 - 4
            return i + 2;
        }
    }

    return -1;
}
