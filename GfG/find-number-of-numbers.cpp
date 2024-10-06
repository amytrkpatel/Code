// https://practice.geeksforgeeks.org/problems/find-number-of-numbers/1
#include <iostream>
using namespace std;
int num(int a[], int n, int k);
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int k;
        cin >> k;
        cout << num(a, n, k) << endl;
    }
}

int num(int a[], int n, int k)
{
    int temp, flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
            flag++;
        else
        {
            while (a[i] != 0)
            {
                temp = a[i] % 10;
                a[i] = a[i] / 10;
                if (temp == k)
                    flag++;
            }
        }
    }
    return flag;
}
