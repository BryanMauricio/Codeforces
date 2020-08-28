#include <iostream>

using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);

    int t, cnt=0;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        if(s[0] == 'T') {
            cnt += 4;
        }
        else if(s[0] == 'C') {
            cnt += 6;
        }
        else if(s[0] == 'I') {
            cnt += 20;
        }
        else if(s[0] == 'D') {
            cnt += 12;
        }
        else if(s[0] == 'O') {
            cnt += 8;
        }



    }
    cout << cnt;




}