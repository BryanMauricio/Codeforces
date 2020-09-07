#include <bits/stdc++.h>
#define pb push_back
#define S string
#define ll long long
#define vt vector<int>

using namespace std;

int main() {

    ll t;
    cin >> t;
    ll i = t / 2;
    ll k = i - 1;
    ll u = t - 1;
    ll ans = 0;
    if(t == 2) {
        cout << "I hate that I love it";
        return 0;
    }
    if(t % 2 != 0) {
        while(true) {
        if(i <= 0 && k <= 0) {
            break;
        }
        cout << "I hate that ";
        cout << "I love that ";
        i--;
        k--;
            }
    }
    else if(t >= 4) {
        while(true) {
        if(ans > t - 3) {
            break;
        }
        cout << "I hate that ";
        ans++;
        cout << "I love that ";
        ans++;
            }
    }

    if(t % 2 == 0) {
        cout << "I hate that ";
        cout << "I love it";
    }
    else {
        cout << "I hate it";
    }
}