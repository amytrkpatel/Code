#include<bits/stdc++.h>
using namespace std;

int main() {
	int T;
	unsigned long long int K, N, count=0;
	unsigned int A, B;

	//cin>>T;
	scanf("%d", &T);
	while(T!=0)
	{
        //cin>>N>>A>>B>>K;
	    scanf("%llu, %lu, %lu, %llu", &N, &A, &B, &K);
	    for(int i=1; i<=N; i++)
	    {
	        if((i%A==0) && (i%B==0))
	            cout<<"Skipped:"<<i;
	            continue;
	        else if(i%A==0)
                cout<<"Divisible by A:"<<count;
	            count++;
	        else
                cout<<"Divisible by B:"<<count;
	            count++;
	    }
	    T--;
	}
	if(count<K)
	    printf("Lose");
	    //cout<<"Lose";
	else
	    printf("Win");
	    //cout<<"Win";
	return 0;
}
