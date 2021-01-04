//https://www.hackerrank.com/challenges/30-operators/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    double mealCost, tip, tax;
    double tipP, taxP;
    int tC;
    cin>>mealCost;
    cin>>tipP;
    cin>>taxP;
    tip=(mealCost*(tipP/100));
    cout<<"\nTip"<<tip;

    tax=(mealCost*(taxP/100));
    cout<<"\nTax"<<tax;

    tC = round(mealCost+tip+tax);
    cout<<"\nThe total meal cost is "<<tC<<" dollars.";
    return 0;
}
