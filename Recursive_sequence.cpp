#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t, n, i, j;
	cin>>t;
	while(t--)
	{
		int k = 1;
		cin>>n;
		int64_t a[n];

		int64_t sum = 0;

		for(i = 1; i <= n; i++){
            int64_t b[i];
            int64_t multi = 1;
			for(j = 1; j <= i; j++)
			{
				b[j] = k * 1;
				k++;
				multi *= b[j];
				a[i] = multi;
			}
			sum += a[i];
	}
		cout<<sum<<"\n";

	}
	return 0;
}



/*#include<bits/stdc++.h>
using namespace std;
int recur(int* k,int j){
    int product = 0;
    while(j--){
        //product = product + k * recur(k-1);
    }
    return product;
}
main(){
    int t;
    cin>>t;
    while(t--){
        int n, f=0, i, p;
        cin>>n;
        for(i=1, p=1 ; i<=n; i++)
        {
            //f = f + recur(&p,i);
        }
    }
}
*/
