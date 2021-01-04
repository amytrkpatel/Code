#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector <uint64_t> v;
    uint64_t sum=0;
    for(int i=0;i<5;i++)
    {
        int value;
        cin>>value;
        v.push_back(value);
        sum= sum + v[i];
    }
    uint64_t max = *max_element(v.begin(), v.end());
    uint64_t min = *min_element(v.begin(), v.end());
    cout<<sum-max<<" "<<sum-min;
    return 0;
}
