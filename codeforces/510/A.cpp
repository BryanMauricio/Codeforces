#include <bits/stdc++.h>
#define pb push_back
#define S string
#define ll long long
#define vt vector<int>


using namespace std;

int main() {

    long long a,b;
    cin >> a >> b;
    int x = a;
    for(int i = 0;i<=a + 10000000;i++) {
        if(a == 0) {
            break;
        }
        for(int y = 0;y<b;y++) {
            cout << "#";
        }
        a--;
        cout << "\n";
        if(a == 0) {
            break;
        }
        for(int u = 1;u<b;u++) {
            cout << ".";
        }
        cout << "#";
        cout << "\n";
        a--;
        if(a == 0) {
            break;
        }
        for(int k = 0;k<b;k++) {
            cout << "#";
        }
        a--;
        cout << "\n";
        if(a == 0) {
            break;
        }
        cout << "#";
        for(int j = 1;j<b;j++) {
            cout << ".";
        }
        cout << "\n";
        a--;
    }
}
