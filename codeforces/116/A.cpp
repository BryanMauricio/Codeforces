#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {

    ll t,ans=0;
    cin >> t;
    vector<int> y;
    while(t--) {
        int a,b;
        cin >> a >> b;
        ans += b - a;
        y.push_back(ans);
    }
    cout << *max_element(y.begin(), y.end() + t);
}