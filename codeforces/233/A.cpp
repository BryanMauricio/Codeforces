#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);


    int t;
    cin >> t;
    if(t % 2 != 0) {
        cout << -1;
        return 0;
    }
    else if(t % 2 == 0) {
        for(int i = t;i<t + 1;i--) {
        if(i == 0) {
            break;
        }
        cout << i << " ";
        }
    }
}