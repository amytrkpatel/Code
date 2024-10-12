// INCOMPLETE
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n1, n2, n3;
        cin >> n1 >> n2 >> n3;
        map<int, int> m;

        for (int i = 0; i < n1; i++)
        {
            int j;
            cin >> j;
            m[j] = 1;
        }
        for (int i = 0; i < n2; i++)
        {
            int j;
            cin >> j;
            if (m[j] == 1)
            {
                m[j] = 2;
            }
        }
        for (int i = 0; i < n3; i++)
        {
            int j;
            cin >> j;
            if (m[j] == 2)
            {
                m[j] = 3;
            }
        }
        int f = 0;
        for (auto it = m.begin(); it != m.end(); it++)
        {
            if (it->second == 3)
            {
                cout << it->first << " ";
                f = 1;
            }
        }
        if (f == 0)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << endl;
        }
        return 0;
    }
}
