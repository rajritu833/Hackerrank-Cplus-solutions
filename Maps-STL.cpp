#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int Q,type;
    cin>>Q;
    map<string,int>mp;
    string name;
    for(int i(0),mark;i<Q;++i)
    {
        cin>>type>>name;
        if(type==1)
        {
            cin>>mark;
            mp[name] +=mark;
        }
        else if(type==2)
        {
            mp.erase(name);
        }
        else
        {
            cout<<mp[name]<<endl;
        }
    }
    return 0;
}



