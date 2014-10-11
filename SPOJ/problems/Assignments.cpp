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

LL dp[(1<<20)+5];
vector<vi> st;
int n;
LL back(int topic){
    if(topic == (1<<n)-1)
        return 1;
    if(dp[topic] != -1)
        return dp[topic];
    
    // calc ones
    int x =0;
    REP(i,n)
    if(topic & (1<<i))
        x++;
   
    
   LL ans =0;
    REP(i,n)
      if(!(topic & (1<<i)) && st[x][i] == 1 )
          ans += back(topic | (1<< i));
   
    return dp[topic] = ans;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#endif
        int t;sc(t);
        while(t--){
            CLR(dp,-1);
            sc(n);
            st.assign(n,vi(n,0));
            REP(i,n){
                REP(j,n)
                  sc(st[i][j]);
            }
            printf("%lld\n",back(0)); 
        }

return 0; 
}
