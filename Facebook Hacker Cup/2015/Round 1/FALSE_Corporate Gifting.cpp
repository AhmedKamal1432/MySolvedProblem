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
int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }

vi visited;
vector<vi> grp , grp_rev;
vii finish_time;

int dfs(int u , int t) {
  // printf("u = %d\n",u );
  t++;
  visited[u] = true;
  for (int j = 0; j < (int)grp[u].size(); j++) {
    int v = grp[u][j];
    // printf("v = %d \n", v);
    if (!visited[v])
    t = dfs(v,t);
  }
  finish_time[u].first = ++t;
  finish_time[u].second = u;
  return t;
}

int it_dfs(int s,int t){
  stack<ii > st;
  st.push(ii(s,t));
  while(!st.empty()){
    ii u = st.top();
    if(!visited[u.first]){
      REP(i,SZ(grp[u.first])){
        int v = grp[u.first][i];
          st.push(ii(v,++t));
        }
          visited[u.first] = true;
          continue;
      }
    if(visited[u.first]){
      finish_time[u.first].first = ++t;
      finish_time[u.first].second = u.first;

      st.pop();
    }
  }
  return t;
}

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
#endif
  int t; sc(t);
  REP(ts,t){
    int n; sc(n);
    grp.assign(n+1,vi());  grp_rev.assign(n+1,vi());
    finish_time.assign(n+1,ii(0,0));
    visited.assign(n+1,0);
    vi arr(n+1,0);
    REP(i,n){
      sc(arr[i]);
      grp[arr[i]].push_back(i+1);
      // printf("s = %d d = %d\n",arr[i],i+1 );
      grp_rev[i+1].push_back(arr[i]);

    }
    int t= 0;
    REP(i,n){
      if(!visited[i+1])
        t = it_dfs(i+1,t);
    }
    sort(ALL(finish_time));
  // REP(i,n){
  //   printf("t = %d at u =%d\n",finish_time[i+1].first , finish_time[i+1].second );
  // }

    std::vector< map<int,bool> >  v_map(n+1, map<int,bool>());
    vi gift(n+1,0);
    LOOP(i,1,n+1){
      int t =1;
      int u = finish_time[i].second;
      while(true){
        if(v_map[u].find(t) == v_map[u].end()){
          break;
        }
        t++;
      }
      gift[u] = t;
      int p = grp_rev[u][0];
      v_map[p][t] = true;
    }
  LL ans = 0;
  REP(i,n){
    ans+= gift[i+1];
  }
  printf("Case #%d: ",ts+1);
  cout<<ans<<endl;
  int mx = 0;
  REP(i,n){
    mx = max(mx, gift[i+1]);
  }
  // printf("max = %d\n", mx);

  }

return 0;
}
