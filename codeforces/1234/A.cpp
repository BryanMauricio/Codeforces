#include <iostream>
#include <algorithm>
#include <cmath>


using namespace std;


int main()
{
	int t,o[100000];
	int sum = 0;
	cin >> t;
	while(t--) {
		int a;
		cin >> a;
		for(int i = 0;i<a;i++) {
			cin >> o[i];
			sum += o[i];
		}
		if(sum % a == 0) {
			cout << sum / a << endl;
		}
		else {
			cout << sum / a + 1 << endl;
		}
		sum = 0;
		
	}	
		
}