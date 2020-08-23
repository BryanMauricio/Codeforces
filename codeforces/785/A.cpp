#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
#include<iomanip>
#include<fstream>

using namespace std;

int main()

{
    int x;
    int cnt = 0;
    string s;
    cin >> x;
    for(int i=0; i<x; i++)
    {
        cin >> s;
        if(s == "Cube")
            cnt += 6;
        if(s == "Icosahedron")
            cnt += 20;
        if(s == "Dodecahedron")
            cnt += 12;
        if(s == "Octahedron")
            cnt += 8;
        if(s == "Tetrahedron")
            cnt += 4;
            

    }
cout << cnt;
}
