#include <bits/stdc++.h>
using namespace std;
int main() {
    int q,marks,type;
    string name;
    map <string,int> m;
    map<string,int>::iterator it;
    cin>>q;
    while(q!=0){
        cin>>type;
        switch(type){
            case 1:{cin>>name;
                    cin>>marks;
                    it=m.find(name);
                    if(it==m.end()){
                        m.insert(make_pair(name,marks));
                    }
                    else{
                        it->second+=marks;
                    }
                   }
            case 2:{cin>>name;
                    m["name"]=0;
                   }
            case 3:{cin>>name;
                    if(m["name"]==0)
                        cout<<"0"<<endl;
                    else
                        cout<<m["name"]<<endl;
                   }
        }
        q--;
    }
    return 0;
}
