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
int dp[1005][1005][2];
int m,n,x,y;
int arr[1005][2];
int back (int c,int p,int t)
{
	if(c == m){
		if(p>=x)
			return 0;
		else
			return INF;
	}
	if(dp[c][p][t] != -1)
		return dp[c][p][t];

	int m =INF;
	if(t == 0){
		if(p>=x || c ==0)
		m = back (c+1,1,1)+arr[c][1];
		if(p < y)
		m = min(m,back (c+1,p+1,0)+ arr[c][0]);
	}
	else{
		if(p>=x || c ==0)
		m = min ( m, back (c+1,1,0)+arr[c][0]);
		if(p < y)
		m = min(m,back (c+1,p+1,1)+ arr[c][1]);
	}

	return dp[c][p][t]=m;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#endif

sc(n);sc(m);sc(x);sc(y);
VS s (n,"");
LOOP(i,n)
 cin >> s[i];

CLR(dp,-1);
CLR(arr,0);
LOOP(i,n)
 LOOP(j,m){
	if(s[i][j] == '#')
		arr[j][1]++;
	else
		arr[j][0]++;
}

int ans  = back(0,0,0);
printf("%d\n",ans);
return 0;
}
		
