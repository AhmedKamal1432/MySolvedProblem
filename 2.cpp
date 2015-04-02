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

LL dp[5003][5003];
int n,a,b,k;
int MOD = 1000000007;
LL back(int x , int t){
  if(x <= 0 || x > n)
    return 0;

  if(t == 0)
   return 1;
  
  LL &ans = dp[x][t];
  if(ans != -1)
    return ans;
  int d = abs(x-b);
  ans =0;
  LL temp = 0;
  LOOP(i,1,d){
    temp = back(x+i , t-1)%MOD;
    ans+=temp;
    if(temp == 0)
      break;
  }
  LOOP(i,1,d){
    temp = back(x-i , t-1)%MOD;
    ans+=temp;
    if(temp == 0)
      break;
  }
return ans= ans%MOD;

}

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
#endif
  cin>>n>>a>>b>>k;
  CLR(dp,-1);
  printf("%d\n",(int)(back(a,k)%MOD) );
return 0; 
}
