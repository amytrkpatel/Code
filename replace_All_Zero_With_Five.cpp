//https://practice.geeksforgeeks.org/problems/replace-all-0s-with-5/1

#include<bits/stdc++.h>
using namespace std;

int convertFive(int n);

int main()
{
    int T;							//T test cases
    cin>>T;
    while(T--)
    {
    	int n;						//input integer
    	cin>>n;
    	cout<<convertFive(n)<<endl;
    }
}

int convertFive(int n)				//function to convert all 0's to 5's
{
    int num = 0, last_digit;
    int temp = n;
    int i=1;						//counting the face value
    while(temp != 0)
	{
	    last_digit = temp%10;		//slicing the last digit
	    temp = temp/10;				//storing without the last digit
	    if(last_digit == 0)
	        last_digit=5;
	    num = num + i*last_digit;	//saving the final number
	    i = i*10;
    }
    return num;
}
