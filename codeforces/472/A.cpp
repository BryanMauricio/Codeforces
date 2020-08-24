#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int x = a - 6;
    if(a % 2 == 0) {
        cout << 4 << " " << a - 4;
    }
    else if(a % 2 != 0 && a % 3 != 0 && a % 5 != 0 && a - 8 % 2 == 0 || a - 8 % 3 == 0) {
        cout << 8 << " " << a - 8;
    }
    else if(x % 2 == 0 || x % 3 == 0 || x % 5 == 0) {
        cout << 6 << " " << a - 6;
    }
    else if(a % 5 == 0) {
        cout << 10 << " " << a - 10;
    }
    else {
        cout << 9 << " " << a - 9;
    }






}