#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>
#include<cstdlib>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;
#define REP(i,n) for(int i =0;i< n;i++)
#define sc(x) scanf("%d",&x);
#define SZ(s) s.size()
#define CLR(x,i) memset(x,i,sizeof(x));
typedef long long int  LL;
int n;
vector<vector<int> > arr;
int dp[1005][1<<11][12];
int back(int mx,int p,int m){
	if(m == n)
		return mx;
	if(dp[mx][p][m] != -1)
		return dp[mx][p][m];
	int mn = 1<<29;
	REP(i,n){
		if(!(p&(1<<i))){
			mn =min(mn,back(max(mx,arr[i][m]),p|(1<<i),m+1));
		}
	}
	return dp[mx][p][m] =mn;
}
int main(){
  freopen("fegla.in","r",stdin);
	int t;sc(t);
	REP(ts,t){
		CLR(dp,-1);
		 sc(n);
		 arr.assign(n,vector<int>(n,0));
		 REP(i,n)
			 REP(j,n)
			  sc(arr[i][j]);
		 int ans = back(0,0,0);
		 	printf("Case %d: %d\n",ts+1,ans);
	}
}


