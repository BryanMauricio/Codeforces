#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    int t;
    cin >> t;
    while(t % 5 != 0) {
        t++;
    }
    cout << t/5;


}