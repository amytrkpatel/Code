#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
	vector<uint64_t> A;
	uint64_t sum=0;
    cin>>n;
    for(int i = 0; i < n; i++){
        uint64_t value;
        cin>>value;
        A.push_back(value);
        sum= sum + A[i];
    }
     cout<<sum;
     return 0;
}
