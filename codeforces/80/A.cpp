#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a,b,o,i;
    cin >> a >> b;
    if(a % 2 == 0) {
        for(i = a + 1;i<100000;i++) {
            if(i == 3 || i == 5 || i == 7) {
                break;
            }
            else if(i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0 && i & 9 != 0) {
                break;
            }
            else {
                i++;
            }
        }
    }
    else {
        for(o = a + 1;o<1000000;i++) {
            if(o == 3 || o == 5 || o == 7) {
                break;
            }
            else if(o % 2 != 0 && o % 3 != 0 && o % 5 != 0 && o % 7 != 0 && o & 9 != 0) {
                break;
            }
            else {
                o++;
            }
        }
    }
    if(b == i || b == o) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }


}
