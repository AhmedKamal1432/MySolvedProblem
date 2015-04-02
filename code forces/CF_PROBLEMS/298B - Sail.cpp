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

bool check (int a,int s,int d,int f){
  return a <=0 && s <=0 && d <=0 && f <=0;
}

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
#endif
int x,y,a,b,tmp;
cin>>tmp>>x>>y>>a>>b;
int dx = a-x;
int dy = b-y;
int n=0,e=0,s=0,w=0;
if(dx > 0)
  e+=dx;
else
  w+=abs(dx);

if(dy > 0)
  n+=dy;
else
  s+=abs(dy);
int i = 0;
string arr;
cin>>arr;
for (; i < SZ(arr); ++i){
  if(check(n,s,w,e))
    break;
  switch(arr[i]){
    case 'S' : s--;
      break;
    case 'N': n--;
      break;
    case 'W':w--;
      break;
    default : e--;
  }
}
// printf("%d %d %d %d\n",n,s,e,w );
if(check(n,s,w,e))
  printf("%d\n",i );
else
  printf("-1\n");
return 0; 
}
