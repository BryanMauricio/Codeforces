#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    string s;
    int cnt = 0;
    cin >> s;
    int n = s.size();
    for(int i = 0; i<= n;i++){
        if(s[i] == s[i - 1]) {
            cnt ++;
            if(cnt == 7) {
                cout << "YES";
                return 0;
            }
        }
        else {
            cnt = 1;
        }






    }
    cout << "NO";






}