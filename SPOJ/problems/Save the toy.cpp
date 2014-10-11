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
#define sc(x) scanf("%lld",&x)
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

LL dp[100005];
LL  n;
LL arr[100010];
LL back(int pos){
    if(pos >= n)
        return 0;
    if(dp[pos] != -1 )
        return dp[pos]; 
    
    //pick 1
    dp[pos] = arr[pos]+back(pos+2);
    
    //pick 2
    dp[pos] = max(dp[pos],arr[pos]+arr[pos+1] +back(pos+4));
   
    //pick 3
    dp[pos] = max(dp[pos],arr[pos]+arr[pos+1]+arr[pos+2] +back(pos+6));
    
    return dp[pos];
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#endif
        LL t;sc(t);
        REP(ts,t){
            sc(n);
            CLR(dp,-1);
            CLR(arr,0);
            REP(i,n)
              sc(arr[i]);
            printf("%lld\n",back(0));
        }

return 0; 
}
