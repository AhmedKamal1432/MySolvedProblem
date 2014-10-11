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

int dp[50001][102];
int k,n;
vi arr;
int back(int w,int i){
    if(i == n)
        return abs(2*w - k);
    if(dp[w][i] != -1)
        return dp[w][i];
    int ans =0;
    ans = back(w,i+1);
    ans = min( ans , back(w+arr[i],i+1) );
    
    return dp[w][i]=ans; 
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
            arr.assign(n,0);
            int sum =0;
            REP(i,n){
              sc(arr[i]);
              sum+=arr[i];
            }
            int ans =0;
            k = sum;
            ans = back(0,0);
            printf("%d\n",ans);
        }
return 0; 
}
