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

const int MaxN = 10000007;
int loD[MaxN];

void sieve() {
    for (int i = 1; i < MaxN; i++)loD[i] = i;
    for (int i = 2; i <= MaxN; i++) if (loD[i] == i)
            for (int j =  i; j <= MaxN; j += i) if (loD[j] == j)
                    loD[j] = i;
}

int primcy[MaxN];

int main()
{
#ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
int t; sc(t);
sieve();
LOOP(i,2,MaxN){
 int p = i;
 int rev =0;
 int ans =0;
  while(p > 1){
    if(loD[p] > rev){
      ans++;
      rev = loD[p];
    }
    p/= loD[p];
  }
  primcy[i] = ans;
}

REP(ts,t){
  int a,b,k;
  sc(a); sc(b); sc(k);
  int ans = 0;
  LOOP(i,a,b+1){
    // printf("x = %d  primcy = %d\n",i,primcy[i] );
    if(primcy[i] == k)
      ans++;
  }
  printf("Case #%d: %d\n",ts+1,ans );
}

return 0; 
}
