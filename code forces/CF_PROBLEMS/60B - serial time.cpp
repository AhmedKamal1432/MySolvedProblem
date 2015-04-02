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
vector<VS> arr;
vector<vector < vector <bool> > >visited;
int k,n,m;

int dfs(int x,int y,int z){
  if(visited[x][y][z])
    return 0;
  int ans = 1;
  visited[x][y][z] = true;
  if(y > 0 && arr[x][y-1][z] == '.')
    ans+= dfs(x,y-1,z);
  if(x > 0  && arr[x-1][y][z] == '.')
      ans+= dfs(x-1,y,z);
  if(z > 0 && arr[x][y][z-1] == '.')
      ans+= dfs(x,y,z-1);
  if(x < k-1 && arr[x+1][y][z] == '.')
      ans+= dfs(x+1,y,z);
  if(y < n-1 && arr[x][y+1][z] == '.')
      ans+= dfs(x,y+1,z);
  if(z < m-1 && arr[x][y][z+1] == '.')
      ans+= dfs(x,y,z+1);
    return ans;
}

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
#endif
  cin>>k>>n>>m;

arr.assign(k,VS(n,""));
visited.assign(k,vector < vector<bool> > (n,vector<bool> (m , false) ) );
REP(i,k)
  REP(j,n)
   cin>>arr[i][j];
// return 0;
int x , y;
sc(x);sc(y);
int ans = dfs(0,x-1,y-1);
printf("%d\n", ans);
return 0; 
}
