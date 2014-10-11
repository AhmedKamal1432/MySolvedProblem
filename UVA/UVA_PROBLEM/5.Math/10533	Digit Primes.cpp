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
#define ii pair<int,int> 
#define vii vector< pair<int,int> > 
#define sc(x) scanf("%d",&x)
double const EPS = 2.22045e-016;
#define INF (1<<29)

#define ALL(v)              ((v).begin()), ((v).end())
#define SZ(v)               ((int)((v).size()))
#define CLR(v, d)           memset(v, d, sizeof(v))
#define REP(i, n)       for(int i=0;i<(int)(n);++i)
#define LOOP(i,b, n)        for(int i=(b);i<(int)(n);++i)

#define PB  push_back
typedef vector<double>    VD;
typedef vector<string>    VS;
int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }


const int MaxN =1000005;
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

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#endif
 // printf("MaxN =%d\n",MaxN);
int t;sc(t);
char c;
sieve();
vi dgp;
stringstream ss; string s;
REP(i,SZ(primes)){
  ss<<primes[i]; ss>>s; ss.clear();
  int b = 0;
  REP(k,SZ(s))
   b += (s[k]-'0');
  if(isprime[b])
    dgp.push_back(primes[i]);

 // printf("primes[i]=%d , b =%d\n",primes[i],b);
}
 int x,y;
REP(ts,t){
 sc(x);sc(y);
 int ans = upper_bound(ALL(dgp),y) - lower_bound(ALL(dgp),x);
 // if(binary_search(ALL(dgp),x))
 //    ans++;
 // if(binary_search(ALL(dgp),y))
 //    ans++;
 printf("%d\n",ans);
}
return 0; 
}
