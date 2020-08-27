#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
  int a,b,c,d,cnt=0;
  cin >> a >> b >> c >> d;
  if(a == b && b == c && c == d && a == c) {
    cout << 3;
    return 0;
  }
  if(b == c && c == d) {
    cout << 2;
    return 0;
  }
  if(a == b && b == c) {
    cout << 2;
    return 0;
  }
  if(a == b)
    cnt += 1;
  if(a == c)
    cnt += 1;
  if(a == d)
    cnt += 1;
  if(b == c)
    cnt += 1;
  if(b == d)
    cnt += 1;
  if(c == d)
    cnt += 1;


  cout << cnt;
}