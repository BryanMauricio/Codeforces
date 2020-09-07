#include <bits/stdc++.h>
#define pb push_back
#define S string
#define ll long long
#define vt vector<int>

using namespace std;

int main() {

    ll t;
    cin >> t;
    int x[t],y=t;
    for(int i = 0;i<t;i++) {
        cin >> x[i];
    }
    t -= t - 1;
    while(t <= y) {
        for(int i = 0;i<y;i++) {
            if(x[i] == t) {
                cout << i + 1 << " ";
                t++;
            }
        }
    }
}