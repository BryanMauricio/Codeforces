#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
#include<iomanip>
#include<fstream>

using namespace std;

int main()

{
    int a,b,c;
    cin >> a;
    cin >> b;
    cin >> c;
    int x = a + (b * c);
    int y = a * (b + c);
    int u = a * b * c;
    int k = (a + b) * c;
    int h = a + b + c;
    int ok = max(x, y);
    int oh = max(u, k);
    int oj = max(ok , oh);

    cout << max(oj,h);

    return 0;


}