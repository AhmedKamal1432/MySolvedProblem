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

int n;
vector <vi> graph;
int node,r_node;
vi visit;
vi in_cycle;

void get_node(int u,int p){
  if(visit[u]){
    node = u;
    return ;
  }
  visit[u] = 1;
  REP(i,SZ(graph[u])){
    if(graph[u][i] != p)
      get_node(graph[u][i] , u);
  }
  return ;
}

int detect(int u,int p){
  // printf("in %d\n", u+1);
  if(visit[u]){
    if(u == r_node){
      in_cycle[u] = 1;
      return 1;
    }
    return 0 ;
  }
  visit[u] = 1;
  int ans = 0;
  REP(i,SZ(graph[u])){
    if(graph[u][i] != p)
      ans += detect(graph[u][i] , u);
  }
  // printf("at %d ans = %d\n", u+1,ans);
  in_cycle[u] = ans;
  return ans;
}

int bfs(int u){
  int ans =0;
  queue<ii> q;
  if(in_cycle[u])
    return 0;
  q.push(ii(u,0));
  visit[u] = 1; 
  while(!q.empty()){
    ii f = q.front();
    q.pop();
    REP(i,SZ(graph[f.first])){
      if(visit[graph[f.first][i] ])
        continue;
      if(in_cycle[graph[f.first][i] ])
        return f.second+1;
      q.push(ii(graph[f.first][i] ,f.second +1 ));
      visit[graph[f.first][i] ] = 1;
    }
  }
  return 0;
}

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
#endif
sc(n);

graph.assign(n,vi());
visit.assign(n,0);
in_cycle.assign(n,0);

int x ,y;
REP(i,n){
  sc(x);sc(y);
  graph[x-1].push_back(y-1);
  graph[y-1].push_back(x-1);
}
node = -1;
REP(i,n){
  visit.assign(n,0);
  node = -1;
  get_node(i,-1);
  if(node != -1)
    r_node = node;
}
// printf("r_node = %d\n",r_node );

visit.assign(n,0);
detect(r_node , -1);
// printf("in in_cycle\n");
// print_v(in_cycle);
REP(i,n){
  visit.assign(n,0);
  if(i == n-1)
    printf("%d\n",bfs(i) );
  else
    printf("%d ", bfs(i));
}

return 0; 
}
