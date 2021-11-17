#include <bits/stdc++.h>
using namespace std;
main()
{
    int t, n, mycount[3];
    char c;
    vector<char> r;
    cin >> t;
    while (t != 0)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> c;
            r.push_back(c);
        }
        mycount[0] = count(r.begin(), r.end(), 'R');
        cout << "Reds are:" << mycount[0] << endl;
        mycount[1] = count(r.begin(), r.end(), 'B');
        cout << "Blues are:" << mycount[1] << endl;
        mycount[2] = count(r.begin(), r.end(), 'G');
        cout << "Greens are:" << mycount[2] << endl;
        sort(mycount, mycount + 3);
        cout << "\nn= " << n;
        cout << "\nsorted array is:";
        for (int j = 0; j < 3; j++)
        {
            cout << mycount[j] << " ";
        }
        cout << "\n n-" << mycount[2] << "= " << (n - mycount[2]) << endl;
        r.clear();
        t--;
    }
}
