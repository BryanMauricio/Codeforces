#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {

    int x,u=0;
    cin >> x;
    while(x--) {
        int a;
        cin >> a;
        if(a == 1) {
            u += 1;
        }
    }
    if(u == 0) {
            cout << "EASY" << endl;

    }
    if(u > 0) {
        cout << "HARD" << endl;

    }


}