#include <stdio.h>

int main() {
	int t,k;
	for(k=0;k<t;k++){
	int i, j, n, a[15], temp, cnt=0;
	scanf("%d",&t);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
//odd - even
	for (i = 0; i < n; ++i) 
        {
            for (j = i + 1; j < n; ++j) 
            {
                if (a[i]%2==0) 
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
	for (i = 0; i < n; ++i) 
    {
    	if (a[i]%2!=0)
    	 cnt++;    	//no. of odds
	}
//descending odds
	for (i = 0; i < cnt; ++i) 
        {
            for (j = i + 1; j < cnt; ++j) 
            {
                if (a[i] < a[j]) 
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }       
    	}
	temp = 0;
//ascending evens
	 for (i = cnt; i < n - 1; ++i) 
        {
            for (j = i + 1; j < n; ++j)
            {
                if (a[i] > a[j]) 
                {
                    temp =  a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
		}
	return 0;
}
