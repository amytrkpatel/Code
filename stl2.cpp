#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> vec;
    int sum=0, n=0;
    cin>>n;
    for(int i = 0; i < n; i++){
            int value;
            cin>>value;
      vec.push_back(value);
      sum= sum + vec[i];
   }
   cout<<sum;
	return 0;
}
