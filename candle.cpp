#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    vector <int> v;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int value;
        cin>>value;
        v.push_back(value);
    }
    int max = *max_element(v.begin(),v.end());
    int mycount = count (v.begin(), v.end(), max);
    cout << mycount;
    return 0;
}
