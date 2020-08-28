#include <iostream>

using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);

    ll t;
    cin >> t;
    while(t--) {
        ll a,b,c;
        cin >> a >> b >> c;
        cout << (c - (c - b) % a) << endl;


    }


}