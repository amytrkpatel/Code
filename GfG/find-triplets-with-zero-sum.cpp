//https://practice.geeksforgeeks.org/problems/find-triplets-with-zero-sum/1

#include<bits/stdc++.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

bool findTriplets(int arr[], int n);

int main()
{
    int t;
	cin>>t;
	while(t--){
    	int n;
    	cin>>n;
    	int arr[n]={0};
    	for(int i=0;i<n;i++)
    		cin>>arr[i];
        if(findTriplets(arr, n))
        cout<<"1"<<endl;
        else 
        cout<<"0"<<endl;
	}
    return 0;
}

bool findTriplets(int arr[], int n)
{ 
    for(int i=0; i<n-2; i++){
        for(int j=i+1; j<n-1; j++){
        	for(int k=j+1; k<n; k++){
        		if(arr[i] + arr[j] + arr[k] == 0){
        			return true;
				}
			}
        }
    }
    return false;
}
