#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
#include<iomanip>
#include<fstream>

using namespace std;

int main()

{
    int a,b,c,d,e;
    cin >> a >> b >> c >> d >> e;
    int wynik_jeden = d + (b * a) + d;
    int wynik_dwa = e + (c * a) + e;
    if(wynik_jeden > wynik_dwa)
        cout << "Second";
    if(wynik_dwa > wynik_jeden)
        cout << "First";
    if(wynik_dwa == wynik_jeden)
        cout << "Friendship";


}