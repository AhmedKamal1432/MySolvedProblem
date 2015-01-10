/*
*
* solved by Ahmed Kamal
*/
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <iostream>
#include <sstream>
#include <cstring>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <bitset>
#include <queue>
#include <utility>
#include <algorithm>
#include <functional>

using namespace std;

typedef long long int LL ;
#define vi vector<int> 
#define ii pair<int,int> 
#define vii vector< pair<int,int> > 
#define sc(x) scanf("%d",&x)
double const EPS = 2.22045e-016;
#define INF (1<<29)

#define ALL(v)        ((v).begin()), ((v).end())
#define SZ(v)       ((int)((v).size()))
#define CLR(v, d)     memset(v, d, sizeof(v))
#define MP(x,y)       make_pair(x,y)

#define REP(i, n)   for(int i=0;i<(int)(n);++i)
#define LOOP(i,b,n)   for(int i=(b);i<(int)(n);++i)

#define PB  push_back
typedef vector<double>    VD;
typedef vector<string>    VS;
int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }

int n, k;
int dp[2003][2003];
int MOD = 1000000007;

int back (int p , int sz){
  if(sz == 0)
    return 1;
  
  if(dp[p][sz] != -1)
    return dp[p][sz];

  int i =1,it =p;
  LL ans = 0;
  while(it <= n){
    ans+= back(it,sz-1)%MOD;
    it = p*(++i);
  }
  return dp[p][sz]=ans%MOD;
}

int main()
{
  #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      //freopen("output.txt", "w", stdout);
  #endif
while(cin>>n>>k){
  CLR(dp,-1);
  printf("%d\n",back(1,k) );
}

return 0; 
}
