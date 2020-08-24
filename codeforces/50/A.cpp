#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
#include<iomanip>
#include<fstream>

using namespace std;

int main()
{

    int a, b;
    cin >> a >> b;
    int wynik = (a * b) / 2;
    if(wynik % 2 == 0 || wynik % 3 == 0) {
        cout << wynik;
    }
    else {
        cout << int(wynik + 0.5);
    }



return 0;
}