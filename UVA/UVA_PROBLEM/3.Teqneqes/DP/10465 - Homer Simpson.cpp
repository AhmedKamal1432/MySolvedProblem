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
int n,m,k;
while(scanf("%d %d %d",&n,&m,&k) != EOF){
//	swap(n,m);
	int d = k/n;
	int mb=k%m; int mg=k/m;
	LOOP(i,d){
	 int ba2i = k - ((i+1)*(n));
	 int g = (i+1) + ba2i/m;
	 int b = ba2i %m;
	 if(mb > b){
		 mb = b;
		 mg = g;
	 }
	 if(mb == b)
		 mg=max(mg,g);
	}
  printf("%d",mg);
  if(mb!=0)
	  printf(" %d",mb);
  printf("\n");
}

return 0;
}

