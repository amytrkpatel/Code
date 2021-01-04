#include <iostream> 
using namespace std;

// A utility function to print an array of size n 
void printArr(int arr[], int n) 
{ 
	for (int i = 0; i < n; i++) 
			cout << arr[i] << " "; 
	cout << endl;
} 


/* Driver program to test above functions*/
int main(){
	int t;
    cin>>t;
    while(t--){
		int n;
		cin>>n;
		
		int arr[n];
		for (int i = 0; i < n; i++) 
			cin>>arr[i];
	
		cout << "Given array is \n"; 
		printArr(arr, n); 
	
		cout<<"First step: Increase all values by (arr[arr[i]]%n)*n\n";
		for (int i=0; i < n; i++){
			arr[i] += (arr[arr[i]]%n)*n;
			cout<<arr[i]<<" ";
		}
		cout<<endl;
		
		
		cout<<"Second Step: Divide all values by n\n"; 
		for (int i=0; i<n; i++){
			arr[i] /= n;
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	
	
		cout << "Modified array is \n"; 
		printArr(arr, n); 
	}
	return 0;
}
