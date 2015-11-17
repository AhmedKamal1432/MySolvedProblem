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


typedef vector<double>    VD;
typedef vector<string>    VS;
void print_v(vi arr){
int n = SZ(arr);
  REP(i,n)
    if(i == n-1)
       cout<<arr[i] <<endl;
     else
      cout<<arr[i]<<" ";
}

int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }

const int MAX = 1003;
double dp[MAX][MAX];
const int R = 0, W = 1, BR = 2, BW = 3;

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
#endif
DSC2(n,m);

CLR(dp, 0);

LOOP(i,1,MAX){
  dp[i][0] = dp[i-1][0] + 100;
  dp[0][i] = dp[0][i-1] + 100;
}
DSC(k);
// printf("k = %d\n",k );
map<ii,bool> mp;
REP(i,k){
  DSC2(x,y);
  mp[MP(x,y)] = true;
}
// printf("start 7afla\n");
double diag = 100.0 * sqrt(2.0);

LOOP(x,1,n+1){
  LOOP(y, 1, m+1){
    double p = INF;
    if(mp.find(MP(x,y)) != mp.end())
      p = dp[x-1][y-1]; 
    dp[x][y] = min(p + diag, 100.0+ min(dp[x-1][y], dp[x][y-1]));
  }
}
printf("%d\n", int(dp[n][m] +0.5));
return 0; 
}
