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
double dp[102][102];
vector<pair<int , double> > arr;
double back(int idx , int elm ){
  if(idx == n+1){
    if(elm <= 0)
      return 0;
    return (double)INF;
  }
  if(elm <= 0)
      return 0;

  if(dp[idx][elm] == dp[idx][elm])
    return dp[idx][elm];

  double ans = back(idx+1 , elm);

    ans = min(ans , arr[idx].second + back(idx, elm - arr[idx].first)  );

    ans = min(ans , arr[idx].second + back(idx+1, elm - arr[idx].first)  );

   return dp[idx][elm] = ans;
}

int main()
{
  #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      //freopen("output.txt", "w", stdout);
  #endif
double x;      
int tst =1;
while(cin>>x>>n){
    CLR(dp,-1);

  printf("Case %d:\n",tst++ );
  arr.assign(n+1,make_pair(1,x));
  REP(i,n){
    cin>>arr[i+1].first>>arr[i+1].second;
  }
  stringstream ss ;string s;
  cin.ignore();
  getline(cin,s);
  ss << s;
  while(ss>>k){
    printf("Buy %d for $%.2f\n",k,back(0,k) ); 
  }
}

return 0; 
}
