/*
*
* solved by Ahmed Kamal
*/
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<iostream>
#include<sstream>
#include<cstring>
#include<vector>
#include<list>
#include<map>
#include<set>
#include<bitset>
#include<queue>
#include<utility>
#include<algorithm>
#include<functional>

using namespace std;

typedef long long int LL ;
#define vi vector<int>
#define ii pair<int,int>
#define vii vector< pair<int,int> >
#define sc(x) scanf("%d",&x)
double const EPS = 2.22045e-016;
#define INF (1<<29)

#define ALL(v)				((v).begin()), ((v).end())
#define SZ(v)				((int)((v).size()))
#define CLR(v, d)			memset(v, d, sizeof(v))
#define LOOP(i, n)		for(int i=0;i<(int)(n);++i)

#define PB	push_back
typedef vector<double>    VD;
typedef vector<string>    VS;
int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#endif
	int n,k,l,c,d,p,nl,np;
	sc(n);sc(k);sc(l);sc(c);sc(d);sc(p);sc(nl);sc(np);
	int a,b,C;
	a= k*l/nl;
	b= c*d;
	C= p/np;
	int v = min(a,b);
	v=min(v,C);
	printf("%d",v/n);
	return 0;
}

