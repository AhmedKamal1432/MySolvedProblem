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
int dp[201][101][101][2];
int n1,n2,k1,k2;

int back (int c,int p,int nn1,int t)
{// nn1 number of taken from n1
	if(c == n1+n2){
			return 1;
	}
	if(dp[c][p][nn1][t] != -1)
		return dp[c][p][nn1][t];

	int m =0;
	if(t == 0){
		if((c - nn1) < n2)
		m += back (c+1,1,nn1,1);
		m%=100000000;
		if(p < k1 && nn1 < n1)
		m += back (c+1,p+1,nn1+1,0);
	}
	else{
		 if(nn1 < n1)
		m = back (c+1,1,nn1+1,0);
			m%=100000000;
		if(p < k2 && (c - nn1) < n2)
		m += back (c+1,p+1,nn1,1);
	}

	return dp[c][p][nn1][t]=m%100000000;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#endif

sc(n1);sc(n2);sc(k1);sc(k2);
CLR(dp,-1);
int ans  = back(0,0,0,0);
printf("%d\n",ans);
return 0;
}

