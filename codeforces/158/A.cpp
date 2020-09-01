#include <iostream>
#include <algorithm>
#include <cmath>


using namespace std;


int main()
{
	int a,b,o[100000];
	cin >> a >> b;
	for(int i =0;i<a;i++) {
		cin >>o[i];
	}
	int ans = 0;
	for(int i = 0;i<a;i++) {
		if(o[i] >= o[b - 1] && o[i] > 0) {
			ans++;
		}
	}
	cout << ans << endl;
}	