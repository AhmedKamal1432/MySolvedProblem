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

VS arr;
vector<vector<bool> > visit;
int n,m,k , cnt ;
void dfs(int i , int j){
  if(visit[i][j])
    return;
  // printf("cnt = %d i = %d , j = %d\n",cnt ,i,j );
  if(cnt == 0)
    return ;
  visit[i][j] = true;
  cnt--;
  if( i > 0 && arr[i-1][j] == '.')
    dfs(i-1,j);
  if( j > 0 && arr[i][j-1] == '.')
    dfs(i,j-1);
  if( i < n-1 && arr[i+1][j] == '.')
    dfs(i+1,j);
  if( j < m-1 && arr[i][j+1] == '.')
    dfs(i,j+1);
  return ;
}
int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
#endif
sc(n);sc(m);sc(k);
arr.assign(n,"");
visit.assign(n,vector<bool> (m,false));

REP(i,n)
  cin>>arr[i];
int s = 0;
REP(i,n)
 REP(j,m)
  if(arr[i][j] == '.')
    s++;
cnt = s-k;
bool first = true;
REP(i,n)
  REP(j,m){
    if(first && arr[i][j] == '.'){
      dfs(i,j);
      first = false;
    }
    if(arr[i][j] == '.' && ! visit[i][j])
      arr[i][j] = 'X';
  }
REP(i,n)
  cout<<arr[i]<<endl;
return 0; 
}
