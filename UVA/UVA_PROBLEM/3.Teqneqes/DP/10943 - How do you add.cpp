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
#define ii pair<int,int0> 
#define vii vector< pair<int,int> > 
#define sc(x) scanf("%d",&x)
double const EPS = 2.22045e-016;
#define INF (1<<29)

#define ALL(v)				((v).begin()), ((v).end())
#define SZ(v)				((int)((v).size()))
#define CLR(v, d)			memset(v, d, sizeof(v))
#define REP(i, n)		for(int i=0;i<(int)(n);++i)
#define LOOP(i,b, n)		for(int i=(b);i<(int)(n);++i)

#define PB	push_back
typedef vector<double>    VD;
typedef vector<string>    VS;
int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }
int n,k;
LL dp[500][500];
int MOD =1000000;
int back(int fn,int fk){
    if(fk == 0)
        return (fn == 0)?1:0;
    if(dp[fn][fk] != -1)
        return dp[fn][fk];
    LL ans=0;
    REP(i,fn+1){
        ans+= back(fn-i,fk-1);
        ans = ans%MOD;
    }
    return dp[fn][fk]=ans;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#endif

        CLR(dp,-1);
        while(scanf("%d %d",&n,&k)!= EOF && !(n==0 && k==0)){
            printf("%d\n",back(n,k));
        }
return 0; 
}
