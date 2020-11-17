#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int x;
        cin >> x;
        string s;
        cin >> s;
        if(s.find('8') == string::npos) {
            cout << "NO" << '\n';
        }
        else {
            int k;
            for(int i = 0;i<x;i++) {
                if(s[i] == '8') {
                    k = i;
                    break;
                }
            }
            cout << (k + 11 <= x ? "YES":"NO") << '\n';
        }
    }
}