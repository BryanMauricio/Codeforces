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
    int ua = 0;
    int jk = 0;
    int x = a + (b * c);
    int y = a * (b + c);
    int u = a * b * c;
    int k = (a + b) * c;
    int h = a + b + c;
    int lucky[] = {x, y, u, k, h};
    int ha = max(jk, ua);
    int *i1;
    i1 = max_element(lucky, lucky + 5);
    cout <<*i1;

    return 0;


}
