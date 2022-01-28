#include<bits/stdc++.h>
using namespace std;
main()
{
    vector<string> Amit;
    Amit.push_back("My name is Amit");
    Amit.push_back("I am from Renukoot");
    Amit.push_back("I am Persuing B.Tech from ABES Engineering college, Gzb");

    cout << "Loop by index:" << endl;
    int i;
    for(i=0;i < Amit.size();i++)
    {
        cout << Amit[i] << endl;
    }


    cout << endl << "Constant Iterator:" << endl;
    vector<string>::const_iterator cii;
    for(cii=Amit.begin(); cii!=Amit.end(); cii++)
    {
        cout << *cii << endl;
    }


    cout << endl << "Reverse Iterator:" << endl;
    vector<string>::reverse_iterator rii;
    for(rii=Amit.rbegin(); rii!=Amit.rend(); ++rii)
    {
        cout << *rii << endl;
    }


    cout << endl << "Sample Output:" << endl;
    cout << Amit.size()<< endl;
    cout << Amit[2] << endl;
    swap(Amit[0], Amit[2]);
    cout << Amit[2] << endl;
}
