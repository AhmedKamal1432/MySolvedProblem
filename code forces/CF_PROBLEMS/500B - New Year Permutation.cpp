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
vi visit;
VS mp;

void dfs (int u){
  if(visit[u])
    return;
  visit[u] = 1;
  REP(i,n){
    if(mp[i][u] == '1')
       dfs(i);
  }
return;
}

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
#endif
 sc(n);;
vi arr(n,0),ans(n,0);
REP(i,n)
  sc(arr[i]);

mp.assign(n,"");

REP(i,n)
  cin>>mp[i];

REP(i,n){
      mp[i][i] = '1';
}

REP(i,n){
  visit.assign(n,0);
  int idx = find(ALL(arr),i+1) - arr.begin();
  dfs(idx);
  // printf("at i = %d which index = %d\n",i+1,idx );
  // print_v(visit);
  REP(k,n){
    if(visit[k] && ans[k] == 0){
      ans[k] =i+1;
      break; 
    }
  }
}
// REP(i,n)
//   cout<<mp[i]<<endl;
print_v(ans);
return 0; 
}
