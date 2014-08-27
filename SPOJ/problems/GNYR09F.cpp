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

int n,k;
int dp[200][200][5];
int back(int sum,int pos,int last_bit){
    if(pos == n){
        if(sum == k)
            return 1;
        
        return 0;
    }
    if(sum > k)
        return 0;
    if(dp[sum][pos][last_bit] != -1)
        return dp[sum][pos][last_bit];
    int ans = 0;
    if(last_bit == 0){
     // add 1
      ans +=  back(sum,pos+1,1);
      //add 0
      ans += back(sum,pos+1,0);
    }
    else{
      // add 1
      ans +=  back(sum+1,pos+1,1);
      //add 0
      ans += back(sum,pos+1,0);
    }
    return dp[sum][pos][last_bit] = ans;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#endif

        int ts;sc(ts);
        int set;
        REP(t,ts){
            CLR(dp,-1);
            
           sc(set); sc(n);sc(k);
           int ans = back(0,1,0);
           ans+=back(0,1,1);
           printf("%d %d\n",set,ans);
        }
return 0; 
}
