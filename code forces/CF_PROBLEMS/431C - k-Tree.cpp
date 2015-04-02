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

LL dp[102][102][3];
int k,d;
int MOD = 1000000007;
LL back(int i , int n,int take){
  // printf("%d %d\n",i,n );
  if(n < 0)
    return 0;
  if(n == 0){
    if(take)
      return 1;
    return 0;
  }
  
  LL &ans =dp[i][n][take];
  if(ans != -1)
    return ans;
  ans = 0;
    LOOP(j,1,k+1){
      if(j >= d)
        ans+=back(i+1,n-j,1)%MOD;
      else  
        ans+=back(i+1,n-j,take)%MOD;
    }
  return ans%MOD;
}

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
#endif
int n;
sc(n);sc(k);sc(d);
CLR(dp,-1);
LL ans = back(0,n,0)%MOD;
cout<<ans<<endl;
return 0; 
}
