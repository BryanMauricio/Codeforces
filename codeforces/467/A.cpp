#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
#include<iomanip>
#include<fstream>

using namespace std;

int main()

{


    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int x, cnt = 0;
    cin >> x;
    for(int i=0;i<x;i++)
    {
        int a, b;
        cin >> a >> b;
        if(a + 2 <= b)
            cnt += 1;

    }







    cout << cnt;
    return 0;
}
