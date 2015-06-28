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

#define ALL(v)        ((v).begin()), ((v).end())
#define SZ(v)       ((int)((v).size()))
#define CLR(v, d)     memset(v, d, sizeof(v))
#define REP(i, n)   for(int i=0;i<(int)(n);++i)
#define LOOP(i,b, n)    for(int i=(b);i<(int)(n);++i)

#define sc(x) scanf("%d",&x)
#define DSC(x) int x; scanf("%d",&x)
#define DSC2(x,y) int x,y; scanf("%d %d",&x,&y)

#define PB  push_back
#define MP  make_pair
double const EPS = 2.22045e-016;
#define INF (1<<29)


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

bool com(ii a, ii b){
  if( (LL) abs(a.first)+(LL)abs(a.second) > (LL)abs(b.first)+(LL)abs(b.second))
    return false;
  return true;
}
int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
#endif
DSC(n);
vii arr(n,ii(0,0));
REP(i,n){
  sc(arr[i].first);
  sc(arr[i].second);
}
sort(ALL(arr),com);

VS ans;
int k = 0;
REP(i,n){
  int x = arr[i].first, y= arr[i].second;
  stringstream ssx,ssy;
  ssx<<abs(x); ssy<<abs(y);
  string sx,sy;
  ssx>>sx; ssy>>sy;

  if(x > 0){
    k++;
    ans.PB("1 "+sx+" R\n");
  }
  else if( x != 0){
    k++;
    ans.PB("1 "+sx+" L\n");
  }

  if(y > 0){
    k++;
    ans.PB("1 "+sy+" U\n");
  }
  else if(y != 0){
    k++;
    ans.PB("1 "+sy+" D\n");
  }
  k++;
  ans.PB("2\n");

  if(x < 0){
    k++;
    ans.PB("1 "+sx+" R\n");
  }
  else if(x != 0){
    k++;
    ans.PB("1 "+sx+" L\n");
  }

  if(y < 0){
    k++;
    ans.PB("1 "+sy+" U\n");
  }
  else if(y != 0){
    k++;
    ans.PB("1 "+sy+" D\n");
  }

  k++;
  ans.PB("3\n");

}
printf("%d\n",k );
REP(i,SZ(ans))
  cout<<ans[i];
return 0; 
}
