#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N,Q,q;
    cin>>N;
    int a[N];
    for(int i=0;i<N;i++)
    {
        cin>>a[i];
    }
    cin>>Q;
    for(int j=0;j<Q;j++)
    {
        cin>>q;
        int id=lower_bound(a,a+N,q)-a;
        if(a[id]==q)
            cout<<"Yes ";
        else {
        cout<<"No ";
        }cout<<id+1<<endl;
    }
    
    return 0;
}
