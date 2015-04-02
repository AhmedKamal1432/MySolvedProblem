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


vector<vii > gr;
int color, target;
vi visit;
bool dfs(int u){
  if(visit[u])
    return false;
  if(u == target)
    return true;
  visit[u] = true;
  bool ans = false;
  REP(i,SZ(gr[u])){
    if(gr[u][i].second == color)
      ans |= dfs(gr[u][i].first);
  }
  return ans;
}
int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
#endif
int n,m,q;
sc(n); sc(m);
gr.assign(n+1,vii());
int a,b,c;
REP(i,m){
  sc(a);sc(b);sc(c);
  gr[a].push_back(ii(b,c));
  gr[b].push_back(ii(a,c));
}
sc(q);
REP(i,q){
  sc(a);sc(b);
  int ans = 0;
  REP(k,m+1){
    color = k;
    target = b;
    visit.assign(n+1,false);
    if(dfs(a))
      ans++;
  }
  printf("%d\n",ans );
}

return 0; 
}
