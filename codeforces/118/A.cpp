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
    my_str.erase(remove(my_str.begin(), my_str.end(), 'a'), my_str.end());
    my_str.erase(remove(my_str.begin(), my_str.end(), 'u'), my_str.end());
    my_str.erase(remove(my_str.begin(), my_str.end(), 'e'), my_str.end());
    my_str.erase(remove(my_str.begin(), my_str.end(), 'i'), my_str.end());
    my_str.erase(remove(my_str.begin(), my_str.end(), 'o'), my_str.end());
    my_str.erase(remove(my_str.begin(), my_str.end(), 'y'), my_str.end());
    
    int n = my_str.size();
    for(int i = 0;i<n;i++) {
        cout << "." << my_str[i];

    }



}