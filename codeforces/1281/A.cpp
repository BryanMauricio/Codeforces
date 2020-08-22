#include<bits/stdc++.h>
#include<iostream>
#include<cstring>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 210101
#define inf 1e9

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d",n)
#define pff(n,m) printf("%d %d",n,m)
#define pffl(n,m) printf("%I64d %I64d",n,m)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int, int>

using namespace std;

int main()
{
    int x;
    string s;
    cin >> x;
    for(int i=0; i<x; i++)
    {
        cin >> s;
        int n = s.size();
        if(s[n-1] == 'o')
        {
            cout << "FILIPINO" << endl;
        }
        if(s[n-1] == 'u')
        {
            cout << "JAPANESE" << endl;
        }
        if(s[n-1] == 'a')
        {
            cout << "KOREAN" << endl;
        }
    }
return 0;
}