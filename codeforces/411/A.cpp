#include <iostream>

using namespace std;


int main()
{

    string s;
    cin >> s;
    int n=0,u=0,l=0;
    for(int i = 0;i<s.size();i++){
        if(isdigit(s[i])) {
            n++;
        }
    }
    for(int i = 0;i<s.size();i++){
        if(isupper(s[i])) {
            u++;
        }
    }
    for(int i = 0;i<s.size();i++){
        if(islower(s[i])) {
            l++;
        }
    }
    if(s.size() >= 5 && u >= 1 && n >= 1 && l >= 1) {
        cout << "Correct";
    }
    else {
        cout << "Too weak";
    }
}