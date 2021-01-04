#include<bits/stdc++.h>
using namespace std;

main() {
    
    int t;
    cin >> t;
    while(t--) {
        int n, m, prev_abs = INT_MAX, ans1 = 0, ans2 = 0;
        
        cin >> n >> m;
        
        int A[n];
        int B[m];
        
        for(int i = 0; i < n; i++) 
            cin >> A[i];
        for(int i = 0; i < m; i++)
            cin >> B[i];
            
        int x;
        cin >> x;
        
        sort(A, A + n);

	    for(int i = 0; i < n; i++) {
	        for(int j = 0; j < m; j++) {
	            int newSum = A[i] + B[j];
				
				if(abs(newSum - x) < prev_abs) {
					prev_abs = abs(newSum - x);
					ans1 = A[i];
					ans2 = B[j];
				}
	        }
	    }
	    
	    cout << ans1 << " " << ans2 << endl;
	}
}
