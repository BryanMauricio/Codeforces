#include <bits/stdc++.h>
#define pb push_back
#define S string
#define ll long long
#define vt vector<int>

using namespace std;

int main() {

    ll a,b;
    cin >> a >> b;
    string stra;
    cin >> stra;
    while(b--) {
        for(int i = 0;i<a;i++) {
            if(stra[i] == 'B' && stra[i + 1] == 'G') {
                stra[i + 1] = stra[i];
                stra[i] = 'G';
                i++;
            }
        }
    }
    cout << stra;
}