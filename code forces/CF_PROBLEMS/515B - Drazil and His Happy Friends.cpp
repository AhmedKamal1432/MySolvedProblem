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
int n,m; sc(n);sc(m);
vi boy(n,0);
vi girl(m,0);
int b,g;
sc(b);
int x;
REP(i,b){
  sc(x);
  boy[x] = 1;
}
sc(g);
REP(i,g){
  sc(x);
  girl[x] =1;
}

int t = m+n+5;
while(t--){
  REP(i,n){
    if(boy[i])
      continue;
    REP(j,m+1){
      if(girl[(j*n+i)%m]){
        boy[i] = 1;
        break;
      }
    }
  }
  //for girls
  REP(i,m){
    if(girl[i])
      continue;
    REP(j,n){
      if(boy[(j*m+i)%n]){
        girl[i] = 1;
        break;
      }
    }
  }
}
bool go = true;
REP(i,n)
  if(!boy[i]){
    go= false;
    break;
  }
REP(i,m){
  if(!girl[i]){
    go= false;
    break;
  }
}
if(go)
  printf("Yes\n" );
else
  printf("No\n");
return 0; 
}
