#include<bits/stdc++.h>
using namespace std;
main(){
    int t;
    cin>>t;
    while(t--){
       int n, s, flag = 0;
       cin>>n;	//Size of array
	   cin>>s;	//Sum of subarray
       
       int A[n];
       for(int i = 0; i < n; i++){
       		cin>>A[i];
	   }
	   
	   int sum = 0;
	   
	   for(int left = 0, right = 0; right < n; right++){
	   		cout<<"\niteration = "<<right;
	   		sum += A[right];
	   		cout<<"\tSum = "<<sum;
	   		
	   		while(left < right && sum > s){
	   			cout<<"\n\tCase 1: "<<sum<<" > "<<s;
			   	sum -= A[left++];
			   	cout<<"\n\tNew Sum is: "<<sum;
				cout<<"\n\tLeftt: "<<left<<" Right: "<<right;
	   		}
			if(sum == s){
				flag = 1;
				cout<<"\n\nPositions are: "<<left+1<<" "<<right+1<<endl;
				break;
			}
			cout<<"\n\n";
	   }
	   if(flag == 0)
	   		cout<<"\n\nReturning "<<-1<<endl;
    }
}
