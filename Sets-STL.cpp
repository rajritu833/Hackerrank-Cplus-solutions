#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    set<int> st;
    int Q,type,q;
    cin>>Q;
    while(Q--)
    {
        cin>>type>>q;
        if(type==1)
        {
            st.insert(q);
        }
        else if(type==2)
        {
            st.erase(q);
        }
        else
        {
            cout<<(st.find(q)==st.end()?"No":"Yes")<<endl;
        }
    }
    return 0;
}



