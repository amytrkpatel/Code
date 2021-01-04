#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector <int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int value;
        cin>>value;
        if(value>=38 && value<=100){
            int q = (int) value/5;
            if((((q+1)*5)-value)<3){
                value = (q+1)*5;
            }
        }
       v.push_back(value);
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<"\n";
    }
    return 0;
}
