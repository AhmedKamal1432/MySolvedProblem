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
       printf("%d\n",arr[i] );
     else
      printf("%d ", arr[i]);
}

int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }

int visit[10000];
vector<vi> gr; 
int dfs(int k){
  if(visit[k])
    return 0;
  int ans = -1;
  visit[k] = true;
  REP(i,SZ(gr[k])){
    ans = max(ans,dfs(gr[k][i]));
  }
  return ans+1;
}

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
#endif
  int MAX = 100000;
  gr.assign(MAX,vi());
  int st; sc(st); scanf("\n");
  stringstream ss;
  string line;

  int a,b;
  while(sc(a) != EOF){
      // printf("%d\n",a );
      scanf(";");
      getline(cin,line);
      ss<<line;
      while(ss>>b){
        // printf("%d %d\n",a,b );
        gr[a].push_back(b);
        gr[b].push_back(a);

      }
      ss.clear();
  }
  CLR(visit,false);
  printf("%d\n",dfs(st) );
return 0; 
}
