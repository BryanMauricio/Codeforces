#include <iostream>
#include <algorithm>
#include <cmath>


using namespace std;


int main()
{
	int a,b,c;
	cin >> a >> b >> c;
	int wyn = (a * 2) + (b * 2);
	int wyn2 = b + c + c + b;
	int wyn3 = a + c + c + a;
	int wyn4 = a + b + c;
	int li[] = {wyn,wyn2,wyn3,wyn4};
	sort(li, li+4);
	cout << li[0];


}