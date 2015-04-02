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
#define REP(i, n)   for(int i=0;i<(int)(n);++i)
#define LOOP(i,b, n)    for(int i=(b);i<(int)(n);++i)
#define MOD 1000000007

#define PB  push_back
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

LL dp[5010][5010];

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
#endif

  int n, a, b, d;
  sc(n); sc(a); sc(b); sc(d);
  a--; b--;
  LOOP(i,0,n){
    dp[0][i] = 1;
  }
  LOOP(i,1,n){
    dp[0][i] += dp[0][i-1];
  }

  LOOP(k,1,d+1){
    LOOP(i,0,n){
      int diff = abs(i-b) - 1;
      int low = i - diff;
      int high = min(n-1, i+diff);
      int val = dp[k-1][i];
      if(i-1 >= 0){
        val = dp[k-1][i] - dp[k-1][i-1];
      }
      if(low-1 >= 0) {
        dp[k][i] = ((dp[k-1][high]%MOD - dp[k-1][low-1]%MOD)%MOD - val%MOD)%MOD;
        while(dp[k][i] < 0) dp[k][i] += MOD;
      } else {
        dp[k][i] = (dp[k-1][high] - val)%MOD;
        while(dp[k][i] < 0) dp[k][i] += MOD;
      }
    }
    if(k < d) {
      LOOP(i,1,n){
        dp[k][i]+= dp[k][i-1]%MOD;
        dp[k][i] %= MOD;
      }
    }
  }

  cout << dp[d][a]%MOD << endl;

  return 0;
}
