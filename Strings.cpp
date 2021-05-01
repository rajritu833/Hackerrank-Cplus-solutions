#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// Complete the program
   string st1,st2;
   getline(cin,st1);
   getline(cin,st2);
   cout<<st1.size()<<" "<<st2.size()<<endl;
   cout<<st1+st2<<endl;
   swap(st1[0],st2[0]);
   cout<<st1<<" "<<st2<<endl;
    return 0;
}
