#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int u = t / 2;
    int x = t - 3;
    int i = x / 2;
    if(t % 2 == 0) {
        cout << u << endl;
        while(u--) {
        cout << 2 << " ";
        }
    }
    else {
        cout << i + 1 << endl;
        while(i--) {
            cout << 2 << " ";
        }
        cout << 3;
    }



}