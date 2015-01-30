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


int v;
vector<vi>EdgeList;
int dst = 0;
bool found ;
int visit[10000];
void dfs(int u){
  // printf("dst = %d , u = %d\n",dst,u );
  if(visit[u])
    return ;
  visit[u] = true;
  if(u == dst){
    // printf("in\n");
     found = true;
     return;
   }
   int sz = SZ(EdgeList[u]);
  REP(i,sz)
    dfs(EdgeList[u][i]);
return;
}

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
#endif
int n,m; sc(n);sc(m);
v = (n)*(m);
EdgeList.assign(v,vi());
string hrz,vrt;
cin>>hrz>>vrt;
// make horizontal edges
REP(i,n){
  int s = i*m;
  if(hrz[i] == '<'){
    REP(k,m-1){
      EdgeList[s+k+1].push_back(s+k);
      // printf("%d -> %d -- ", s+k+1,s+k);    
    }
  }
  else{
    REP(k,m-1){
      EdgeList[s+k].push_back(s+k+1);
      // printf("%d -> %d -- ", s+k,s+k+1);         
    }
  }
  // printf("\n");
}

// printf("\n\n\n start virticallllllllllls \n\n\n");
//make vertical edges
REP(i,m){
  if(vrt[i] == 'v'){
    REP(k,n-1){
      EdgeList[k*m+i].push_back((k+1)*m+i);
      // printf("%d -> %d -- ", k*m+i,(k+1)*m+i);       
    }
  }
  else{
    REP(k,n-1){
      EdgeList[(k+1)*m+i].push_back(k*m+i);   
      // printf("%d -> %d -- ", (k+1)*m+i,k*m+i);       
    }
  }
  // printf("\n");
}

bool good =true;
REP(i,v){
  dst = i;
  REP(k,v){
    CLR(visit , false);
    found = false;
    dfs(k);
    if(!found){
       // printf("i %d -/> k %d\n",i,k );
      good = false;
      break;
    }
  }
  if(!good)
    break;
}

if(good){
  printf("YES\n");
}
else{
  printf("NO\n");
}

return 0; 
}
