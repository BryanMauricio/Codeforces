#include <bits/stdc++.h>


using namespace std;


int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long t,a,k=0;;
    cin >> t >> a;
    while(t--) {
        char s;
        long long x;
        cin >> s >> x;
        if(s == '+') {
            a += x;
        }
        else if(s == '-' && a - x >= 0) {
            a -= x;
        }
        else if(s == '-' && a - x < 0) {
            k++;
        }
    }
    cout << a << " " << k;
}
