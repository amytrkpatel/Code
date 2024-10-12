//https://www.geeksforgeeks.org/find-unit-digit-x-raised-power-y/

#include<iostream> 
#include<math.h> 
using namespace std; 
  
// find unit digit 
int unitnumber(int x, int y)  //x ^ y
{ 
    // Get last digit of x 
    x = x % 10; //x = 8
        
    // Last cyclic modular value 
    if(y!=0) 
        y = y % 4 + 4; //y = 7
  
    // here we simply return the  
    // unit digit or the power  
    // of a number 
    return (((int)(pow(x, y))) % 10); //
} 
  
int main() 
{ 
    int x, y; 
    cin>>x>>y;
      
    // get unit digit number here we pass  
    // the unit  digit of x and the last  
    // cyclicity number that is y%4 
    cout << unitnumber(x, y);
}
