#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t,sum = 0;
    cin >> t;
    int u = t;
    while(true) {
        u = t;
        while (u > 0)
        {
        int digit = u % 10;
        sum  += digit;
        u /= 10;
        }
        if(sum % 4 == 0) {
            cout << t;
            break;
        }
        else {
            sum = 0;
            t++;
        }
    }
}