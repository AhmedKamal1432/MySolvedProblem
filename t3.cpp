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

typedef unsigned long long int LL ;
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

LL modpow(LL b,LL p,LL m){
  if(p == 1)
    return b;
  if(p == 0)
    return 1;

  if(p&1)
    return (b%m * modpow(b,p-1,m))%m;
  LL ans = modpow(b,p/2,m);
  return (ans%m * ans%m)%m;
}
int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
#endif
LL n,k,l,m;
cin>>n>>k>>l>>m;
LL ans = 1;
REP(i,l){
  if(k& 1LL<<i)
    ans*= (n%m)*((n-1)%m) /2;
  else{
    LL t =(modpow(2, n, m)%m) - (modpow(2, n-1, m)%m) +1;
    ans*=  (t+m)%m;
  }
  ans = ans%m;
}
// (modpow(2, (n+1)/2, m)%m)
cout<<ans<<endl;
return 0; 
}
