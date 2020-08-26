#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
        int a;
        cin >> a;
        int b = 5;
        while(b--) {
            if(a % 5 == 0) {
                cout << a / 5;
                return 0;
            }
            else {
                a++;
            }

        }


}