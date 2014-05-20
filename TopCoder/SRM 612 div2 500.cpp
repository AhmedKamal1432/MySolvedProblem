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
double const Epsilon = 2.22045e-016;

#define ALL(v)				((v).begin()), ((v).end())
#define SZ(v)				((int)((v).size()))
#define CLR(v, d)			memset(v, d, sizeof(v))
#define LOOP(i, n)		for(int i=0;i<(int)(n);++i)

#define PB	push_back
typedef vector<double>    VD;
typedef vector<string>    VS;
int dp[1005][1000];
#define INF (1<<28)
class EmoticonsDiv2 {
public:
	int sm;
	int solve(int n,int co){
		if(n == sm)
			return 0;
		if(n+co > sm )
			return INF;
		if(co> sm)
			return INF;
		if(dp[n][co] != -1)
			return dp[n][co];
		//paste
		int s= solve(n+co,co)+1;
		if(2*n <= sm){ //copy
			s=min(s,solve(n+n,n)+2);
		}
		return dp[n][co] =s;
	}
	int printSmiles(int smiles) {
		sm =smiles;
		CLR(dp,-1);
       int ans = solve(1,1)+1;
       return ans;
	}
};


