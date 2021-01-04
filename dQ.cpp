#include <bits/stdc++.h>
using namespace std;

void printKMax(vector<int>vec,int k){
    vector<int>::iterator r,it=vec.begin();
    while( it != vec.end()) {
    int c=0;
    r = max_element(vec.begin()+c, vec.begin()+k);
    cout<<*r<<" ";
    c=k;
    it++;
    k+=k;
    }
}
int main(){
   int t,x;
   vector<int>vec;
   cin >> t;
   while(t>0) {
      int n,k;
      cin >> n >> k;
      for(int i=0;i<n;i++){
           cin >>x;
           vec.push_back(x);
      }
      printKMax(vec,k);
      t--;
   }
   return 0;
}
