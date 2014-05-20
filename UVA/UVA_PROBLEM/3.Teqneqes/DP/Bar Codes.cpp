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
LL dp[51][51][51][2];
int n,k,mm;
LL back (int c,int u,int p,int t)
{
	   if(c == n){
			if (u == k && p <=mm){
				return 1;
			}
			return 0;
		}

	if(u > k || p > mm || (u == k && p == mm) )
	 return 0;


	if(dp[c][u][p][t] != -1)
		return dp[c][u][p][t];

	LL m =0;
		m += back (c+1,u,p+1,t);
		m += back (c+1,u+1,1,(t==0)?1 : 0 );

	return dp[c][u][p][t]=m;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#endif

while (scanf("%d %d %d",&n,&k,&mm) != EOF)
{
	CLR(dp,-1);
LL ans  = back(1,1,1,1);
printf("%lld\n",ans);
}
return 0;
}

