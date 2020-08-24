#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, a;
    cin >> s;
    cin >> a;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    if(s > a) {
        cout << 1;
    }
    if(s < a) {
        cout << -1;
    }
    if (s == a) {
        cout << 0;
    }
}