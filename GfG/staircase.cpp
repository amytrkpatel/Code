// https://www.hackerrank.com/challenges/staircase/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i + j) >= (n - 1))
                cout << "#";
            else
                cout << " ";
        }
        cout << "\n";
    }

    return 0;
}