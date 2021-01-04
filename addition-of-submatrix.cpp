//https://practice.geeksforgeeks.org/problems/addition-of-submatrix/0

#include<bits/stdc++.h>
using namespace std;
main(){
    int t;
    cin>>t;
    while(t--){
        int m, n, val;
        cin>>m>>n;

        vector<vector<int>> mtrx;

        for(int i = 0; i < m; i++){
        	mtrx.push_back(vector<int>());
            for(int j = 0; j < n; j++){
                cin>>val;
                mtrx[i].push_back(val);
            }
        }

        int x1, y1, x2, y2;
        cin>>x1>>y1>>x2>>y2;

        int sum = 0;

        cout<<"\nmatix is:\n";
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                cout<<mtrx[i][j]<<" ";
            }
            cout<<endl;
        }

        cout<<"\nsub-matix is:\n";
        for(int i = x1-1; i <= x2-1 ; i++){
            for(int j = y1-1; j <= y2-1; j++){
            	cout<<mtrx[i][j]<<" ";
				sum = sum + mtrx[i][j];
            }
            cout<<endl;
        }

        cout<<"\nSum of sub-matix is: "<<sum<<endl;
    }
}
