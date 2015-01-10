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
int dp[102][102] , arr[102][102] , parent[102][102];
int main()
{
  #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      //freopen("output.txt", "w", stdout);
  #endif
  int n,m;
  while(cin>>n>>m){
    REP(i,n)
      REP(j,m){
        sc(arr[i][j]);
        dp[i][j] = arr[i][j];
      }

      REP(i,n){
        parent[i][0] = -1;
      }
    int mn;
    LOOP(j,1,m){
      REP(i,n){
        mn = min(dp[(i-1+n)%n][j-1] , dp[i][j-1]);
        dp[i][j] +=  min( mn , dp[(i+1)%n][j-1]);
        
        if(dp[(i-1+n)%n][j-1] < dp[i][j-1] || (dp[(i-1+n)%n][j-1] ==dp[i][j-1] && (i-1+n)%n < i ) ){
          if(dp[(i-1+n)%n][j-1] < dp[(i+1)%n][j-1])
            parent[i][j] = (i-1+n)%n;
          else if (dp[(i-1+n)%n][j-1] == dp[(i+1)%n][j-1])
            parent[i][j] = min( (i-1+n)%n , (i+1)%n);
          else   
            parent[i][j] = (i+1)%n;
        }
        else{
          if(dp[i][j-1] < dp[(i+1)%n][j-1])
            parent[i][j] = i;
          else if(dp[i][j-1] == dp[(i+1)%n][j-1])
            parent[i][j] = min(i,(i+1)%n);
          else
            parent[i][j] = (i+1)%n;
        }
        // printf("parent = %d ",parent[i][j]);
      }
      // printf("\n");
    }
    int ans =INF; 
    int idx = 0;
    REP(i,n){
      if(dp[i][m-1] < ans){
        ans = dp[i][m-1];
        idx = i;
      }
    }
    // printf("idx =%d ",idx);
    vi pp ;
    int col = m;
    while(idx != -1){
      pp.push_back(idx+1);
      idx = parent[idx][--col];
          // printf("idx =%d ",idx);
    }
    // printf("\n");
    reverse(ALL(pp));
    REP(i,m){
      if(i == m-1)
        printf("%d\n",pp[i] );
      else
        printf("%d ",pp[i] );
    } 
    printf("%d\n",ans );
  }
return 0; 
}
