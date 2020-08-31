#include <iostream>

using namespace std;

int main()
{

    int t,sum=0,o[100000];
    cin >> t;
    while(t--) {
        int x;
        cin >> x;
        for(int i = 0;i<x;i++){
            cin >> o[i];
            sum += o[i];
        }
        if(sum % x == 0) {
            cout << sum / x << endl;
        }
        else {
            cout << sum / x + 1 << endl;
        }
        sum = 0;
    }
}
