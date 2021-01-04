#include<bits/stdc++.h>
using namespace std;
main(){
    int t;
    cin>>t;
    while(t--){
       int n, m, x, y = 0, ans1 = 0, ans2 = 0, sum = 0, diff = 0;
       int A[n], B[m];
       
       cin>>n>>m;
       
       for(int i = 0; i < n; i++)
       		cin>>A[i];
       	sort(A, A+n);
       		
       	for(int i = 0; i < m; i++)
       		cin>>B[i];
       	sort(B, B+m);
       	
       	cin>>x;

       	for(int i = 0; i < n; i++){
       		for(int j = 0; j < m; j++){
       			sum = A[i] + B[j];
       			diff = abs(x - sum);
       			if(diff < (x-y)){
       				y = sum;
       				ans1 = A[i];
       				ans2 = B[j];
				}
			}
		}
		cout<<ans1<<" "<<ans2<<endl;
    }
}
