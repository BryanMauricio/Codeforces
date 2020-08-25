#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {

    int a,b,cnt=0;
    cin >> a >> b;
    while(a--) {
        int x;
        cin >> x;
        if(b >= x) {
            cnt += 1;
        }
        else {
            cnt += 2;
        }
    }

    cout << cnt;
}
