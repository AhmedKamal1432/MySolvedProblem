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
#define LOOP(i,b,n)   for(int i=(b);i<(int)(n);++i)

#define PB  push_back
typedef vector<double>    VD;
typedef vector<string>    VS;
int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }

vi dfs_num;
int cnt;
int n,m;
int const DFS_BLACK = 1;
int const DFS_WHITE = -1;

vector < vector< int >  > AdjList;

void dfs(int u)
{
 dfs_num[u] = DFS_BLACK;
 cnt++;
  REP(j,SZ(AdjList[u]))  {
      if (dfs_num[AdjList[u][j]] == DFS_WHITE)
        dfs(AdjList[u][j]);
  }
}


int main()
{
  #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      //freopen("output.txt", "w", stdout);
  #endif
int tst =1;
while(cin>>n>>m){
  AdjList.assign(n,vi());
  int v1 ,v2 ;
  REP(i,m){
    sc(v1); sc(v2);
    AdjList[v1-1].push_back(v2-1);
    AdjList[v2-1].push_back(v1-1);
  }
  vi comp;
  dfs_num.assign(n, DFS_WHITE);
  for (int i = 0; i < n; i++)
    if (dfs_num[i] == DFS_WHITE){
      dfs(i);
      comp.push_back(cnt);
      cnt=0;
  }
  LL ans = 1;
  REP(i,SZ(comp)){
    ans *= (1LL << (comp[i]-1) );
  }
  cout<<ans<<endl;
}


return 0;
}
