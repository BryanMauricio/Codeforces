#include <bits/stdc++.h>

using namespace std;

int main() {

    long long t,ans=0;
    cin >> t;
    long long x[t];
    for(int i = 0;i<t;i++) {
        cin >> x[i];
    }
    sort(x, x + t);
    for(int i = 0;i<t;i++) {
        if(i + 1 > x[i]) {
            ans += (i + 1) - x[i];
        }
        else if(i + 1 < x[i]) {
            ans += x[i] - (i + 1);
        }
    }
    cout << ans;
}
