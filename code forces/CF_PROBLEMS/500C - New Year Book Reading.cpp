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

int n,m;
vii wgt;
vi call;
bool com(ii a , ii b){
  int aw =0 , bw = 0;
  // assume a at first;
  int f = a.second;
  REP(i,m){
    if(call[i] == a.second)
      if(f == b.second){
        f = a.second;
        aw+=a.first;
      }
    
    if(call[i] == b.second)
      if(f == a.second){
        f = b.second;
        aw+=b.second;
      }    
  }
  // assume b at first
  f = b.second;
  REP(i,m){
    if(call[i] == a.second)
      if(f == b.second){
        f = a.second;
        bw+=a.first;
      }
    
    if(call[i] == b.second)
      if(f == a.second){
        f = b.second;
        bw+=b.second;
      }    
  }
  return aw < bw;
}

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
#endif
  sc(n);sc(m);
wgt.assign(n,ii(0,0));
call.assign(m,0);
REP(i,n){
  sc(wgt[i].first);
  wgt[i].second = i+1;
}
REP(i,m)
  sc(call[i]);
sort(ALL(wgt),com);
int ans = 0;
REP(i,m){
  int k = 0;
  while(wgt[k].second != call[i]){
    ans +=wgt[k].first;
    k++;
  }
  ii tmp = wgt[k];
  wgt.erase(wgt.begin()+k);
  wgt.insert(wgt.begin() , tmp);
}
printf("%d\n",ans );
return 0; 
}
