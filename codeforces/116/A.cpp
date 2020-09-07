#include <bits/stdc++.h>
#define pb push_back
#define S string
#define ll long long
#define vt vector

using namespace std;

int main() {

    ll t,ans=0;
    cin >> t;
    vt<int> y;
    while(t--) {
        ll a,b;
        cin >> a >> b;
        ans += b - a;
        y.pb(ans);
    }
    cout << *max_element(y.begin(), y.end() + t);
}