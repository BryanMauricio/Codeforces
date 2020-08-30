#include <iostream>
#include <cmath>
#include <algorithm>
#include <cctype>
#include <string>

using namespace std;




int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    int x[] = {a,b,c};
    int ma = x[0];
    int mi = x[0];
    for(int i = 0;i<3;i++){
        if(x[i] > ma) {
            ma = x[i];
        }
    }
    for(int i = 0;i<3;i++){
        if(x[i] < mi) {
            mi = x[i];
        }
    }
    cout << ma - mi;




}