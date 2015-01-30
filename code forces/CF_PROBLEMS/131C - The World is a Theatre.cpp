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

// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1
vector<vector<LL> > pascal;
void pascal_triangle(int n){
  pascal.assign(n,vector<LL>(n));
  REP(i,n)
    pascal[i][0] = pascal[i][i] = 1;
  LOOP(i,2,n){
    LOOP(k,1,i){
      pascal[i][k] = pascal[i-1][k]+ pascal[i-1][k-1];
    }
  }
}

int n, m , t;
int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
#endif
sc(n);sc(m);sc(t);
pascal_triangle(32);
LL ans = 0;
LOOP(b,4,t){
  int g = t-b;
  // printf("b= %d g =%d\n",b,g );
  if(b <= n && g <= m){
    ans+=(pascal[n][b])*(pascal[m][g]);
  }
}
cout<<ans;
printf("\n");
return 0; 
}
