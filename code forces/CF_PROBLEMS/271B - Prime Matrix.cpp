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

#define ALL(v)              ((v).begin()), ((v).end())
#define SZ(v)               ((int)((v).size()))
#define CLR(v, d)           memset(v, d, sizeof(v))
#define REP(i, n)       for(int i=0;i<(int)(n);++i)
#define LOOP(i,b, n)        for(int i=(b);i<(int)(n);++i)

#define PB  push_back
typedef vector<double>    VD;
typedef vector<string>    VS;
int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }

const int MaxN =150000;
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

int mat[500][500];
int n,m;
int dv[500][500];

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#endif
        sieve();
        while(cin>>n>>m){
            REP(i,n)
            REP(j,m){
                int x ;sc(x); 
                mat[i][j]=x;
                int mv = *lower_bound(ALL(primes),x) - x;
                dv[i][j]=mv;
            }
            //rows
            int mini = 1<<29; 
            REP(i,n){
                int sum = 0;
                REP(j,m)
                sum +=dv[i][j];
                mini = min(mini,sum);
            }
                    
            REP(i,m){
                int sum = 0;
                REP(j,n)
                sum +=dv[j][i];
                mini = min(mini,sum);
            }
            printf("%d\n",mini);        
        }

return 0; 
}
