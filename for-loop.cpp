#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a,b,i;
    string digits[10]={"","one","two","three","four","five","six","seven","eight","nine"};
    cin>>a;
    cin>>b;
    for(i=a;i<=b;i++)
    {
        if(i<=9)
        {
            cout<<digits[i]<<endl;
        }
        else if(i>9 && i%2==0)
        {
            printf("even\n");
        }
        else if(i>9 && i%2!=0)
        {
            printf("odd\n");
        }
    }
    return 0;
}
