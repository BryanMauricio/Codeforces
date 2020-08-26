#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int a, cnt=0;
    string s;
    cin >> a >> s;
    for(int i = 0; i<a;i++) {
        if(s[i] == s[i + 1]) {
            cnt++;
        }
    }
    cout << cnt;
}
