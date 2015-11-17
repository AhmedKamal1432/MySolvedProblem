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
typedef long long int ll ;
#define vi vector<int> 
#define ii pair<int,int> 
#define vii vector< pair<int,int> > 

#define ALL(v)				((v).begin()), ((v).end())
#define SZ(v)				((int)((v).size()))
#define CLR(v, d)			memset(v, d, sizeof(v))
#define REP(i, n)		for(int i=0;i<(int)(n);++i)
#define LOOP(i,b, n)		for(int i=(b);i<(int)(n);++i)

#define sc(x) scanf("%d",&x)
#define DSC(x) int x; scanf("%d",&x)
#define DSC2(x,y) int x,y; scanf("%d %d",&x,&y)

#define PB	push_back
#define MP  make_pair
double const EPS = 2.22045e-016;
#define INF (1<<29)


typedef vector<double>    VD;
typedef vector<string>    VS;
void print_v(vi arr){
int n = SZ(arr);
  REP(i,n)
    if(i == n-1)
       cout<<arr[i] <<endl;
     else
      cout<<arr[i]<<" ";
}

int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }

LL _sieve_size;
bitset<10000010> bs;   // 10^7 should be enough for most cases
vi primes;   // compact list of primes in form of vector<int>


// first part

void sieve(ll upperbound) {          // create list of primes in [0..upperbound]
  _sieve_size = upperbound + 1;                   // add 1 to include upperbound
  bs.set();                                                 // set all bits to 1
  bs[0] = bs[1] = 0;                                     // except index 0 and 1
  for (ll i = 2; i <= _sieve_size; i++) if (bs[i]) {
    // cross out multiples of i starting from i * i!
    for (ll j = i * i; j <= _sieve_size; j += i) bs[j] = 0;
    primes.push_back((int)i);  // also add this vector containing list of primes
} }                                           // call this method in main method

long long PowerMod(LL x, LL p, int m) {
	if (!p)
		return 1;
	long long y = PowerMod(x, p >> 1, m);
	y = y%m;
	y = (y * y) % m;
	if (p & 1)
		y = (y * x) % m;
return y;
}
long long modInv(LL x, int m) {
	if (gcd(x, m) != 1)
		throw string("not coprimes ya 7aywan");
	return PowerMod(x, m - 2, m);
}


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		//freopen("output.txt", "w", stdout);
	#endif
		DSC(T);
		sieve(100005);
		int MOD = 1e9 + 7;
		REP(t,T){
			vii pf;
			DSC(n);
			while(n--){
				DSC(x);
				REP(i,SZ(primes)){
					int c = 0;
					while(x%primes[i] == 0){
						c++;
						x/=primes[i];
					}
					if(c){
						pf.push_back(ii(primes[i], c));
						// printf("%d %d\n", primes[i], c);
					}
				}
				if(x != 1)
					pf.push_back(ii(x,1));
			}
			sort(ALL(pf));
			vector<pair<LL,LL> > arr;
			REP(i,SZ(pf)){
				LL c = pf[i].second;
				while(i+1 != SZ(pf) && pf[i].first == pf[i+1].first)
					c += pf[++i].second;
				arr.push_back(MP(pf[i].first, c));
				// printf("%d %d\n", pf[i].first, c);
			}
			LL ans = 1;
			REP(i,SZ(arr)){
				LL term = (PowerMod(arr[i].first, arr[i].second+1, MOD) - 1 +MOD) % MOD;
				term *= modInv(arr[i].first -1, MOD ) %MOD;
				term %= MOD;
				// printf("term %d: %lld\n",i, term );
				ans *= term%MOD;
				ans %= MOD;
			}
			printf("Case %d: %lld\n",t+1,ans%MOD );
		}

	return 0; 
}
