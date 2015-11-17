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

#define ALL(v)				((v).begin()), ((v).end())
#define SZ(v)				((int)((v).size()))
#define CLR(v, d)			memset(v, d, sizeof(v))
#define REP(i, n)		for(int i=0;i<(int)(n);++i)
#define LOOP(i,b, n)		for(int i=(b);i<(int)(n);++i)

#define sc(x) scanf("%lld",&x)
#define DSC(x) LL x; scanf("%lld",&x)
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

LL MAX = 1000000007;
LL N,K;
LL dp[1010][1010];

LL back(LL n, LL k){
	if(n < 0 || n > N)
		return 0;
	if(k == 0)
		return (n == 0)? 1 : 0;
	LL & ans = dp[n][k];
	if(ans != -1)
		return ans; 
	ans = n * back(n-1, k-1) % MAX;
	ans += (N-n) * back(n+1, k-1) % MAX;
	ans = ans % MAX;
	return ans;
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		//freopen("output.txt", "w", stdout);
	#endif
		DSC(T);
		REP(t,T){
			CLR(dp,-1);
			sc(N); sc(K);
			LL n = 0;
			REP(i,N){
				DSC(x);
				if(x == 1)
					n++;
			}
			LL ans  = back(n,K);
			printf("Case #%d: %lld\n",t+1, ans % MAX );
		}
	return 0; 
}
