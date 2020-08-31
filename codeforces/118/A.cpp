#include <iostream>
#include <cmath>
#include <algorithm>
#include <cctype>
#include <string>


using namespace std;



int main()
{

    string my_str;
    cin >> my_str;
    transform(my_str.begin(), my_str.end(), my_str.begin(), ::tolower);
    for(int i = 0;i<my_str.size();i++){
        if(my_str[i] != 'a' && my_str[i] != 'u' && my_str[i] != 'e' && my_str[i] != 'y' && my_str[i] != 'i' && my_str[i] != 'o') {
            cout << "." << my_str[i];
        }
    }

}