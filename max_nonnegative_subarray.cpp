#include<bits/stdc++.h>
using namespace std;
void maxset(vector<int> A){
    vector<int> sum(A.size());
    for(int i = 0, j = 0; i<A.size(); i++){
        sum[j] += A[i];
        if(A[i]<0){
            j++;
            continue;
        }
    }
    int index = distance(sum.begin(), max_element(sum.begin(), sum.end()));
    int k = 0, count = 0;
	if(index == 0){
		while(A[k]>=0){
			cout<<A[k]<< " ";
			k++;
		}
	}
	else{
		while(1){
			if(A[k]<0){
				count++;
				if(count == index){
					break;
				}
			}
		k++;
		}
		for(int i = k+1; A[i]>=0; i++){
			cout<<A[i]<<" ";
		}
	}
}

main(){
    int t;
    cin>>t;
    while(t--){
       vector<int> A;
       int a,n;
       cin>>n;
       for(int i =0; i< n; i++){
       	cin>>a;
       	A.push_back(a);
	   }
	   maxset(A);
    }
}
