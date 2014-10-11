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
int n,m,d,q;
LL dp[500][50][50];
vi arr;
LL back(int pos,int r,int c){
    if(pos == n || c ==0)
        return (r == 0 && c==0)?1:0;
    if(dp[pos][r][c] != -1)
        return dp[pos][r][c];
     
    dp[pos][r][c]=back(pos+1,(r+arr[pos])%d,c-1);
    dp[pos][r][c]+=back(pos+1,r,c);
    return dp[pos][r][c];
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#endif
        int t=1;
        while(scanf("%d %d",&n,&q)!= EOF && !(n==0 && q==0)){
            arr.assign(n,0);
            REP(i,n)
              sc(arr[i]);
            printf("SET %d:\n",t);
            REP(i,q){
             CLR(dp,-1);
             int m;
             sc(d);sc(m);
             printf("QUERY %d: %lld\n",i+1,back(0,0,m));
            }
            t++;
        }

return 0; 
}
