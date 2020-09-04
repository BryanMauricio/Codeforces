#include <iostream>
#include <algorithm>
#include <cmath>


using namespace std;


int main()
{
	int t;
	string x;
	cin >> t;
	cin >> x;
	int ans = 0;
	for(int i = 0;i<t;i++) {
		if(x[i] == x[i + 1] && x[i + 1] == x[i + 2] && x[i] == 'x' && x[i + 1] == 'x' && x[i + 2] == 'x') {
			ans++;
		}
	}
	cout << ans;
	
		
	
}