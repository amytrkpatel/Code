// lower_bound/upper_bound example
#include <iostream>     // std::cout
#include <algorithm>    // std::lower_bound, std::upper_bound, std::sort
#include <vector>       // std::vector

void print();
int main () {
  int myints[] = {80,10,20,40,20,70,20,30};
  std::vector<int> v(myints,myints+8);           // 80,20,10,40,60,70,50,30

  std::sort (v.begin(), v.end());                // 10,20,30,40,50,60,70,80

  std::vector<int>::iterator low,up;
  low=std::lower_bound (v.begin(), v.end(), 50); //          ^
  up= std::upper_bound (v.begin(), v.end(), 70); //                   ^

  std::cout << "lower_bound at position " << (low- v.begin()) << '\n';
  std::cout << "upper_bound at position " << (up - v.begin()) << '\n';

  return 0;
}
