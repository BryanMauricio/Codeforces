#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t,n,ans=0;
    cin >> t >> n;
    int x[n];
    for(int i = 0;i<t;i++) {
        cin >> x[i];
    }
    for(int i =0;i<t;i++) {
        if(n <= 0){
            break;
        }
        n -= 86400 - x[i];
        ans++;
    }
    cout << ans;

}