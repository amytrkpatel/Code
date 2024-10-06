//Problem Link :> https://www.geeksforgeeks.org/maximum-and-minimum-in-an-array/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define testcase()   \
    int t;           \
    scanf("%d", &t); \
    while (t--)

int main()
{

    testcase()
    {
        int n;
        cin >> n;
        vector<int> a;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        cout << *min_element(a.begin(), a.end()) << " " << *max_element(a.begin(), a.end()) << "\n";
    }
    return 0;
}
