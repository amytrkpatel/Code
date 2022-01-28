#include <bits/stdc++.h>
using namespace std;

int main ()
{
    /*int i;
    cin>>i;
    std::string binary = std::bitset<4>(i).to_string();
    cout<<binary[2];*/
    int n;
    cin>>n;
    int arr[n];
    string binary[n];
    for(int i=0;i<n;i++){
    cin>>arr[i];
    binary[i] = std::bitset<4>(arr[i]).to_string();
    }

}
//std::string binary = std::bitset<4>(i).to_string();
