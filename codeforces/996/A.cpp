#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{

    int k, cnt=0;
    cin >> k;
    if(k % 100 == 0) {
      cout << k / 100;
      return 0;
    }
    int number = k - k % 100;
    int two_last = k % 100;
    int last = two_last % 10;
    int decimal = two_last - last;
    if(k > 100) {
      cnt += number / 100;
      if(decimal == 10) {
        cnt++;
      }
      else if(decimal == 20) {
        cnt++;
      }
      else if(decimal == 30) {
        cnt += 2;
      }
      else if(decimal == 40) {
        cnt += 2;
      }
      else if(decimal == 50) {
        cnt += 3;
      }
      else if(decimal == 60) {
        cnt += 3;
      }
      else if(decimal == 70) {
        cnt += 4;
      }
      else if(decimal == 80) {
        cnt += 4;
      }
      else if(decimal == 90) {
        cnt += 5;
      }
      if(last == 1) {
        cnt++;
      }
      if(last == 2) {
        cnt += 2;
      }
      if(last == 3) {
        cnt += 3;
      }
      if(last == 4) {
        cnt += 4;
      }
      if(last == 5) {
        cnt += 1;
      }
      if(last == 6) {
        cnt += 2;
      }
      if(last == 7) {
        cnt += 3;
      }
      if(last == 8) {
        cnt += 4;
      }
      if(last == 9) {
        cnt += 5;
      }
    }
    if(k < 100 && k > 9) {
      if(decimal == 10) {
        cnt++;
      }
      else if(decimal == 20) {
        cnt++;
      }
      else if(decimal == 30) {
        cnt += 2;
      }
      else if(decimal == 40) {
        cnt += 2;
      }
      else if(decimal == 50) {
        cnt += 3;
      }
      else if(decimal == 60) {
        cnt += 3;
      }
      else if(decimal == 70) {
        cnt += 4;
      }
      else if(decimal == 80) {
        cnt += 4;
      }
      else if(decimal == 90) {
        cnt += 5;
      }
      if(last == 1) {
        cnt++;
      }
      if(last == 2) {
        cnt += 2;
      }
      if(last == 3) {
        cnt += 3;
      }
      if(last == 4) {
        cnt += 4;
      }
      if(last == 5) {
        cnt += 1;
      }
      if(last == 6) {
        cnt += 2;
      }
      if(last == 7) {
        cnt += 3;
      }
      if(last == 8) {
        cnt += 4;
      }
      if(last == 9) {
        cnt += 5;
      }
      }

      if(k < 10) {

        if(k == 1) {
          cnt++;
        }
        else if(k == 2) {
          cnt += 2;
        }
        else if(k == 3) {
          cnt += 3;
        }
        else if(k == 4) {
          cnt += 4;
        }
        else if(k == 5) {
          cnt += 1;
        }
        else if(k == 6) {
          cnt += 2;
        }
        else if(k == 7){
          cnt += 3;
        }
        else if(k == 8) {
          cnt += 4;
        }
        else if(k == 9) {
          cnt += 5;
        }
      }
      cout << cnt;
      }