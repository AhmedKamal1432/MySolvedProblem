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

vi isprime;
vi primes;
void sieve(int n) {
  isprime.assign(n+2,1);
  isprime[0] = isprime[1] = 0;
  for (LL i = 2; i <= n; i++)
    if (isprime[i]) {
      for (LL j = i * i; j <= n; j += i) isprime[j] = 0;
      primes.push_back((int)i);
    // printf("%lld\n",i );
    }
}

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
#endif
int n;
sieve(1000000);

int sz = SZ(primes);
while(cin>>n && n != 0){
  bool g = true;
  LOOP(i,1,n){
    if(primes[i] > (n+1)/2){
      g = false;
      break;
    }
    if(isprime[n - primes[i]]){
      printf("%d = %d + %d\n",n,primes[i],n-primes[i]  );
      break;
    }    
  }
  if(!g)
    printf("Goldbach's conjecture is wrong.\n");
}

return 0; 
}
