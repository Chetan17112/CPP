#include <iostream>
#include <map>
using namespace std;

int main() {
    // Write C++ code here
    map<int,int> m;
    map<int,int> :: iterator it;
    m.insert({{1,2},{3,4}});
    for(it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<"\t";
    }
    cout<<m.at(3)<<m.at(1);
    
    return 0;
}