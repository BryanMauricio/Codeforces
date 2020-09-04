#include <bits/stdc++.h>


using namespace std;


int main()
{
   int t;
   string s;
   cin >> t;
   cin >> s;
   int ans = 0;
   for(int i = 0;i<t;i++) {
    if(s[i] == s[i + 1] && s[i + 1] == s[i + 2] && s[i] == 'x' && s[i + 1] == 'x' && s[i + 2] == 'x') {
        ans++;
    }
   }
   cout << ans;


}
