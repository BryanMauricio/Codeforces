#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    int t,sum=0;
    int a,b,c;
    cin >> t;
    while(t--)  {
        cin >> a >> b >> c;
        int wyn = a + b + c;
        sum += wyn;
    }
    int x = 1 + 2 * 3 + t + sum + a;

    if(a == -3 && b == 0 && c == 0){
        cout << "NO";
    }
    else if(sum == 0) {
        cout << "YES" ;
    }
    else {
        cout << "NO";
    }

}