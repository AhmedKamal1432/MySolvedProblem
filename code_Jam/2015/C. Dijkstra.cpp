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

map<ii,int> mp;
map<char,int> kmp;
bool cm(){
  mp[MP(0,0)]=0;
  mp[MP(0,1)]=1;
  mp[MP(0,2)]=2;
  mp[MP(0,3)]=3;
  mp[MP(1,0)]=1;
  mp[MP(1,1)]=4;
  mp[MP(1,2)]=3;
  mp[MP(1,3)]=6;
  mp[MP(2,0)]=2;
  mp[MP(2,1)]=7;
  mp[MP(2,2)]=4;
  mp[MP(2,3)]=1;
  mp[MP(3,0)]=3;
  mp[MP(3,1)]=2;
  mp[MP(3,2)]=5;
  mp[MP(3,3)]=4;
////////////////////
  mp[MP(4,0)]=4;
  mp[MP(4,1)]=5;
  mp[MP(4,2)]=6;
  mp[MP(4,3)]=7;
  mp[MP(5,0)]=5;
  mp[MP(5,1)]=0;
  mp[MP(5,2)]=7;
  mp[MP(5,3)]=2;
  mp[MP(6,0)]=6;
  mp[MP(6,1)]=3;
  mp[MP(6,2)]=0;
  mp[MP(6,3)]=5;
  mp[MP(7,0)]=7;
  mp[MP(7,1)]=6;
  mp[MP(7,2)]=1;
  mp[MP(7,3)]=0;

  kmp['i']=1;
  kmp['j']=2;
  kmp['k']=3;
  return true;
}
int dp[10004][12][12];
string s;
int l,x;
int back(int pos,int r,int c ){
  if(pos == l*x){
    if(c == 2 && r == 3)
      return 1;
    return 0;
  }
  int & ans = dp[pos][r][c];
  if(ans != -1)
    return ans;
  ans = 0;
  int nw =mp[MP(r,kmp[s[pos%l]])];
  // printf("%d %d %d nw = %d\n",pos, r,c,nw );
  if(nw == c+1){
    ans|=back(pos+1,0,c+1);
  }
  ans|= back(pos+1,nw,c);
  return ans=(ans)?1:0;
}

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
DSC(ts);
REP(t,ts){
  CLR(dp,-1);
  cm();
  sc(l);sc(x);
  cin>>s;
  if(back(0,0,0)){
    printf("Case #%d: YES\n",t+1 );
  }
  else
    printf("Case #%d: NO\n",t+1 );
}
return 0; 
}
