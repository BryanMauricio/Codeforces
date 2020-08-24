#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
#include<iomanip>
#include<fstream>

using namespace std;

int main()
{
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    
    int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y;
    cin >> a >> b >> c >> d >> e;
    cin >> f >> g >> h >> i >> j;
    cin >> k >> l >> m >> n >> o;
    cin >> p >> q >> r >> s >> t;
    cin >> u >> v >> w >> x >> y;
    if(a == 1 || e == 1 || u == 1 || y == 1){
        cout << 4;
    }
    if(b == 1 || d == 1 || j == 1 || t == 1 || v == 1 || x == 1 || p == 1 || f == 1) {
        cout << 3;
    }
    if(r == 1 || n == 1 || h == 1 || l == 1){
        cout << 1;
    }
    if(m == 1){
        cout << 0;
    }
    if(g == 1 || s == 1 || q == 1 || i == 1) {
        cout << 2;
    }
    if(c == 1 || w == 1 || k == 1 || o == 1) {
        cout << 2;
    }

return 0;
}