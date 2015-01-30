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


int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
#endif
int n,m,k;sc(n);sc(m);sc(k);
vector<vi> arr(n,vi(m,0));
int ans = 0;
REP(i,k){
  int x,y;sc(x);sc(y);
  x--;y--;
  arr[x][y]++;
  //
  if(y!= 0 ){
    if( x != 0 && arr[x-1][y] && arr[x-1][y-1] && arr[x][y-1]){
      ans = i+1;
      break;
    }
    if(x < n-1 && arr[x][y-1] && arr[x+1][y-1] && arr[x+1][y]){
      ans = i+1;
      break;
    }
  }

  if(y < m-1){
    if(x != 0 && arr[x-1][y] && arr[x-1][y+1] && arr[x][y+1]){
      ans = i+1;
      break;
    }
    if( x < n-1 &&  arr[x][y+1] && arr[x+1][y+1] && arr[x+1][y]){
      ans = i+1;
      break;
    }
  }

}
printf("%d\n",ans );

return 0; 
}
