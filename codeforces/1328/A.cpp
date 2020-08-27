#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
  int a,x , y, t;
  cin >> a;
  while(a--) {
    cin >> x >> y;
    if(x % y == 0){
      cout << 0 << endl;
    }
    else {
      cout << y - x % y << endl;
    }



  }

}
