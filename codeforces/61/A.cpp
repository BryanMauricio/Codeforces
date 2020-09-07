#include <bits/stdc++.h>
#define pb push_back
#define S string
#define ll long long
#define vt vector<int>

using namespace std;

int main() {

    string s,c;
    cin >> c >> s;
    string x = "";
    for(int i = 0;i<s.size();i++) {
        if(c[i] == s[i]) {
            x += "0";
        }
        else {
            x += "1";
        }
    }
    cout << x;
}