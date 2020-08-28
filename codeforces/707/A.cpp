#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    int a,b, cntcolor=0;
    cin >> a >> b;
    char ch;
    int x = a * b;
    int u = x * x;
    while(x--) {
        cin >> ch;
        if(ch == 'C'|| ch == 'M' || ch == 'Y') {
            cout << "#Color";
            return 0;
        }
        else {
            continue;
        }

    }
    cout << "#Black&White";


}