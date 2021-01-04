#include <iostream>
using namespace std;

int main() {
    int t, n, p1, p2, k, Q;
	cin>>t;
	while(t--){
	    cin>>p1>>p2>>k;
	    n= p1+p2;
        Q=n/k;
        if(Q%2 == 0)
            cout<<"CHEF\n";
        else if(Q%2 == 1)
            cout<<"COOK\n";
        }
	return 0;
}
