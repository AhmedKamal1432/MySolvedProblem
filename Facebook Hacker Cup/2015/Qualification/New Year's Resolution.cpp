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

vi p_arr,c_arr , f_arr;
int t ,ttt,n;
bool back(int i , int p , int c , int f){
  // printf("at t = %d p = %d c = %d f = %d\n",ttt, p ,c,f  );
  if(p < 0 || c < 0 || f < 0)
    return false;
  if(i == n){
    if(p == 0 && c == 0 && f == 0)
      return true;
    return false;
  }
  bool ans = back(i+1 , p - p_arr[i],c - c_arr[i] , f - f_arr[i]);
  ans |= back(i+1 , p,c,f);
  return ans;
}

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
sc(t);ttt= t;
REP(ts,t){
  --ttt;
  int gp,gc,gf;
  sc(gp); sc(gc) ; sc(gf);
  sc(n);
  p_arr.assign(n,0); c_arr.assign(n,0); f_arr.assign(n,0);
  REP(i,n){
    sc(p_arr[i]);
    sc(c_arr[i]);
    sc(f_arr[i]);
  }
  bool ans = back(0,gp , gc , gf);
  if(ans)
    printf("Case #%d: yes\n", ts+1);
  else
  printf("Case #%d: no\n",ts+1 );    
}

return 0; 
}
