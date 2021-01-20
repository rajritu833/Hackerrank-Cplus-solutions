#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int k,int l,int m,int n)
{
    if(k>l && k>m && k>n)
        return k;
    else if(l>k && l>m && l>n)
        return l;
    else if(m>l && m>k && m>n)
        return m;
    else
        return n;
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
