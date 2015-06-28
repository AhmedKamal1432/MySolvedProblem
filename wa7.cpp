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
#include <stack>
#include <utility>
#include <algorithm>
#include <functional>

using namespace std;

typedef long long int LL;
typedef long long int ll;
#define vi vector<int> 
#define ii pair<int,int> 
#define vii vector< pair<int,int> > 

#define ALL(v)        ((v).begin()), ((v).end())
#define SZ(v)       ((int)((v).size()))
#define CLR(v, d)     memset(v, d, sizeof(v))
#define REP(i, n)   for(int i=0;i<(int)(n);++i)
#define LOOP(i,b, n)    for(int i=(b);i<(int)(n);++i)

#define sc(x) scanf("%d",&x)
#define DSC(x) int x; scanf("%d",&x)
#define DSC2(x,y) int x,y; scanf("%d %d",&x,&y)

#define PB  push_back
#define MP  make_pair
double const EPS = 2.22045e-016;
#define INF (1<<29)
#define MOD 1000000007


typedef vector<double>    VD;
typedef vector<string>    VS;
void print_v(vi arr){
int n = SZ(arr);
  REP(i,n)
    if(i == n-1)
       printf("%d\n",arr[i] );
     else
      printf("%d ", arr[i]);
}

int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }


// t=0 => W
// t=1 => R
int k, n;

ll dp[100010][5];
ll rec(int i, int t){
  if(i > n) return 0;
  if(i == n) return 1;
  if(dp[i][t] != -1) return dp[i][t];

  ll ans = 0;
  if(t == 0) {
    ans = rec(i+k, 1) % MOD + rec(i+k , 0)%MOD;
  }
  else {
    ans = rec(i+1, 0) % MOD + rec(i+1, 1) % MOD;
  }
  return dp[i][t] = ans % MOD;
}


int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
#endif

  memset(dp, -1, sizeof dp);

  int t;
  sc(t); sc(k);
  while(t-- > 0){
    int low, high;
    sc(low); sc(high);
    ll ans = 0;
    LOOP(j, low, high+1){
      n = j;
      ans += rec(0, 0)%MOD + rec(0, 1)%MOD;
      ans %= MOD;
    }
    printf("%lld\n", ans);
  }
  return 0; 
}
