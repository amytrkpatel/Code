#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    char time12[10],time24[8];
    for(int i=0;i<10;i++)
    {
        cin>>time12[i];
    }
    if(time12[8]=='A')
    {
        if(time12[0]=='1'&&time12[1]=='2')
        {
            time24[0]='0';
            time24[1]='0';
            for(int i=2;i<8;i++)
            {
                time24[i]=time12[i];
            }
        }
        else
        {
            for(int i=0;i<8;i++)
            {
                time24[i]=time12[i];
            }
        }
    }
    else
    {
       if(time12[0]=='1'&&time12[1]=='2')
        {
        for(int i=0;i<8;i++)
            {
                time24[i]=time12[i];
            }
       }
       else
       {
           time24[0]=1+time12[0];
           time24[1]=2+time12[1];

           for(int i=2;i<8;i++)
            {
                time24[i]=time12[i];
            }
       }
    }
   for(int i=0;i<8;i++)
    {
        cout<<time24[i];
    }
    return 0;
}

