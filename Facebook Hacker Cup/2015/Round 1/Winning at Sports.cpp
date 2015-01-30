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
#define REP(i, n)   for(int i=0;i<(int)(n);++i)
#define LOOP(i,b, n)    for(int i=(b);i<(int)(n);++i)

#define PB  push_back
typedef vector<double>    VD;
typedef vector<string>    VS;
int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }

const int MaxN = 2007;
LL st_fr[MaxN][MaxN];
LL st_fl[MaxN][MaxN];
int m,y;

int MOD =  1000000007;

LL s_free(int i, int k){
  // printf("free %d - %d\n",i,k );
  if(i > m ||  k > y)
    return 0;
  if(i == m && k == y)
    return 1;

  if(st_fr[i][k] != -1)
     return st_fr[i][k];

  LL ans =0;
  ans += s_free(i+1 , k) % MOD;
  if( i- k >= 2)
    ans+= s_free(i,k+1) %MOD; 

  return st_fr[i][k] = ans%MOD;
}

LL ful (int i , int k ){
  if(i > m ||  k > y)
    return 0;
  if(i == m && k == y)
    return 1;

  if(st_fl[i][k] != -1)
     return st_fl[i][k];

  LL ans = 0;
  ans+= ful(i , k+1) %MOD;

  if(k - i >=1 || k == y){
    ans+= ful(i+1,k) %MOD;
  } 

 return st_fl[i][k] =ans %MOD;
}

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif


int t; sc(t);
REP(ts,t){
  CLR(st_fr , -1);
  CLR(st_fl , -1);
  char c;
  cin>>m>>c>>y;
  LL fee,fl ;
  fee = s_free(1,0)%MOD;
  fl = ful(0,0)%MOD;
  printf("Case #%d: %d %d\n",ts+1,(int)fee,(int)fl );
}

return 0; 
}
