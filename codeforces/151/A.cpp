#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int mil =  k * l / nl;
    int lemons = c * d;
    int salt = p / np;
    int x[] = {mil,lemons,salt};
    int smallest = x[0];
    for (int i = 0; i < 3; i++) {
        if (x[i] < smallest) {
            smallest = x[i];
      }
   }
    cout << smallest / n;





}