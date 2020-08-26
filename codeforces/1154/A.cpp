#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    cout.setf(ios::fixed);
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a,b,c,d;
    cin >> a >> b >> c >> d;
    double values[4] = {a, b, c ,d};
    double max = values[0];
    for(int i = 0; i < 4; i++) {
      if(values[i] > max) {
        max = values[i];
      }
    }
    if(max == d) {
      cout << int(max  -a) << " " << int(max - b) << " " << int(max - c);
    }
    if(max == c) {
      cout << int(max - a) << " " << int(max - b) << " " << int(max - d);
    }
    if(max == b) {
      cout << int(max) - a << " " << int(max - c) << " " << int(max - d);
    }
    if(max == a) {
      cout << int(max - b) << " " << int(max - c) << " " << int(max - d);
    }

}