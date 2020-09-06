#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a,b;
    cin >> a >> b;
    int x[a];
    for(int i = 0;i<a;i++) {
        cin >> x[i];
    }
    sort(x, x + a);
    if(b == 0 && x[0] == 1) {
        cout << -1;
        return 0;
    }
    else if(b == 0 && x[0] != 1) {
        cout << x[0] - 1;
        return 0;
    }
    else if(x[b - 1] == x[b]) {
        cout << -1;
        return 0;
    }
    cout << x[b - 1];

}