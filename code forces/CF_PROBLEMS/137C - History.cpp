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

struct node{
  int st,end;
  node(){}
  node(int x, int y){
    st=x;
    end = y;
  }
};

bool fo(node a , node b){
  if(a.st == b.st)
     return a.end > b.end;
   return a.st < b.st;
}
int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
#endif
int n; sc(n);
int x,y;
std::vector<node> arr(n,node(0,0));
REP(i,n){
  sc(x);sc(y);
  arr[i]= node(x,y);
}
sort(ALL(arr),fo);
// REP(i,n){
//   printf("%d %d\n",arr[i].st, arr[i].end );
// }
int ans = 0;
int s=arr[0].st ;int  e = arr[0].end;
LOOP(i,1,n){
  if(arr[i].end < e ){
    if(arr[i].st != s )
      ans++;
  }
  else{
    s = arr[i].st;
    e = arr[i].end;
  }
}
printf("%d\n", ans);
return 0; 
}
