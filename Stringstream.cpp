#include <sstream>
#include <vector>
#include <iostream>
#include <cstring>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    stringstream sso(str);
    vector<int> result;
    char ch;
    int tmp;
    while(sso>>tmp)
    {
        result.push_back(tmp);
        sso>>ch;
    }
    return result;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
