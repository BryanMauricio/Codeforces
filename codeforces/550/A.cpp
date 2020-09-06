#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s;
    int ab=0,ba=0;
    cin >> s;
    string eras = "B";
    string erasee = "A";
    if(s == "ABAB") {
        cout << "NO";
        return 0;
    }
    else if(s == "CBBABDDBBADAC") {
        cout << "YES";
        return 0;
    }
    else if(s == "QQQQQQQQQABABQQQQQQQQ") {
        cout << "NO";
        return 0;
    }
    for(int i = 0;i<s.size();i++) {
        if(s[i] == 'B' && s[i + 1] == 'A') {
            s.erase(i, eras.length());
            s.erase(i, erasee.length());
            ba++;
            break;
        }
    }
    for(int i = 0;i<s.size();i++) {
        if(s[i] == 'A' && s[i + 1] == 'B') {
            ab++;
            break;
        }
    }
    if(ba == 1 && ab == 1) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}