#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
#include<iomanip>
#include<fstream>

using namespace std;

int main()
{

    string s,a;
    cin >> s >> a;
    string x = "";
    for(int i=s.size() - 1; i >= 0; i--) {
        x += s[i];
    }
    if(x == a) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}