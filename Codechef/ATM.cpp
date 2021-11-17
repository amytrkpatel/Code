//https://www.codechef.com/problems/HS08TEST

#include<iostream>
#include<iomanip>
using namespace std;
main()
{
    int w;
    float b;
    cin>>w>>b;
    if((w%5==0)&&(w<=b)&&(0<=b<=2000) && (0<w<=2000)&&(w!=0))
        b=b-w-0.50;
    std::cout << std::fixed;
    std::cout << std::setprecision(2);
    std::cout << b;
}
