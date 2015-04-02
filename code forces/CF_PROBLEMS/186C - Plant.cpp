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

#define SC(x) scanf("%d",&x)
#define DSC(x) int x; scanf("%d",&x)
#define DSC2(x,y) int x,y; scanf("%d %d",&x,&y)

#define PB  push_back
#define MP  make_pair
double const EPS = 2.22045e-016;
#define INF (1<<29)


typedef vector<double>    VD;
typedef vector<string>    VS;

int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }

LL MOD = 1000000007;
LL pw(int n){
  if(n <= 1)
    return 2;
  LL ans = pw(n/2) * pw((n+1)/2);
  return ans%MOD;
}
LL modpow(LL base, LL exp, LL modulus) {
  base %= modulus;
  LL result = 1;
  while (exp > 0) {
    if (exp & 1) result = (result * base) % modulus;
    base = (base * base) % modulus;
    exp >>= 1;
  }
  return result;
}
int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
#endif
LL n ;cin>>n;
vector<LL> pr(64,0);
REP(i,63){
  LL p = 1LL<<i;
  p %= MOD;
  pr[i] = p;
}
 // print_v(pr);
LL ans = 1;
int i = 0;
// while(n){
//   if(n&1){
//     printf("i %d\n",i);
//     ans*=pr[i];
//     ans%= MOD;
//   }
//   i++;
//    n /=2;
// }
ans = modpow(2,n,MOD)%MOD ;
ans%=MOD;
ans = ans*(ans+1)/2;
ans%=MOD;
cout<<ans<<endl;
return 0; 
}
