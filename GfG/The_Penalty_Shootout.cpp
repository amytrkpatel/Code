// https://practice.geeksforgeeks.org/problems/the-penalty-shootout3810/1
#include <bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int score = 0;
        char str[500];
        cin >> str;
        for (int i = 0; i < strlen(str); i++)
        {
            if (str[i] == '2' && str[i + 1] == '1')
                score++;
        }
        cout << score << "\n";
    }
}
