/*
*
* solved by Ahmed Kamal
*/
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<iostream>
#include<sstream>
#include<cstring>
#include<vector>
#include<list>
#include<map>
#include<set>
#include<bitset>
#include<queue>
#include<utility>
#include<algorithm>
#include<functional>

using namespace std;

typedef long long int LL ;
#define vi vector<int> 
#define ii pair<int,int0> 
#define vii vector< pair<int,int> > 
#define sc(x) scanf("%d",&x)
double const EPS = 2.22045e-016;
#define INF (1<<29)

#define ALL(v)				((v).begin()), ((v).end())
#define SZ(v)				((int)((v).size()))
#define CLR(v, d)			memset(v, d, sizeof(v))
#define REP(i, n)		for(int i=0;i<(int)(n);++i)
#define LOOP(i,b, n)		for(int i=(b);i<(int)(n);++i)

#define PB	push_back
typedef vector<double>    VD;
typedef vector<string>    VS;
int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }

const int MaxN =100000;
bool isprime[MaxN];
vector<int> primes ;
void sieve () {
    CLR(isprime,true);
    
 for(int i = 2 ; i <= MaxN ; i++)
     if(isprime[i])
        for(int j = 2*i ; j <= MaxN ; j +=i)
              isprime[j] = false ;
for(int i = 2 ; i <= MaxN ; i++ )
  if(isprime[i])
    primes.push_back(i);
}
bool is_prime(LL x){
    if(x<2)
        return false;
    int n = SZ(primes); 
    for(int i=0; i<n && primes[i]*primes[i] <= x ;i++){
        if(x%primes[i] == 0)
            return false;
    }
    return true;

}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#endif
//sieve
        sieve();
        int t;sc(t);
        REP(ts,t){
            if(ts > 0)
                printf("\n");

            LL s,e;
            cin>>s>>e;
            for(LL i=s; i<e+1;i++)
                if(is_prime(i))
                    printf("%lld\n",i);
                
        }

return 0; 
}
