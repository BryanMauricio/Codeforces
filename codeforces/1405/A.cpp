#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;
    while(t--) {
        int x;
        cin >> x;
        int o[x];
        for(int i=0;i<x;i++) {
            cin >> o[i];
        }
        for(int i=x-1;i<x;i--) {
            if(i==-1)
                break;
            cout << o[i] << " ";
        }
    }
}