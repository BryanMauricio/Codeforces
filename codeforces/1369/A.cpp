#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    int t;
    cin >> t;
    while(t--) {
        int x;
        cin >> x;
        if(x % 4 == 0) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
     }

}