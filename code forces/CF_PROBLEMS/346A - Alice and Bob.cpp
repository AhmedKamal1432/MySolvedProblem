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
int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }
void print_v(vi arr){
int n = SZ(arr);
  REP(i,n)
    if(i == n-1)
       printf("%d\n",arr[i] );
     else
      printf("%d ", arr[i]);
}

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
#endif
  int n; sc(n);
vi arr(n,0);
vi next;
int mx = 0;
int t= 0;
while(SZ(arr) > 1){
  if(t == 0) {
    REP(i,n)
     sc(arr[i]);
     mx = *max_element(ALL(arr));
  }
  else
    next.clear();
  REP(i,n){
    LOOP(k,i+1,n){
      // printf("i %d k %d d =%d \n",i,k,gcd(arr[i],arr[k]) );
      next.push_back(gcd(arr[i],arr[k]));
    }
  }
  sort(ALL(next));
  bool f = true;
  REP(i,SZ(next)-1)
    if(next[i] != next[i+1])
      f = false;
  arr = next;
  t++;
  // print_v(next);
  if(f)
    break;
}
int k = mx/arr[0];
// printf("mx %d %d\n",mx ,k );
if((k-n)&1)
  printf("Alice\n");
else
  printf("Bob\n");
return 0; 
}
