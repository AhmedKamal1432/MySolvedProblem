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

int dp[1000][1000][4];

int back(int h,int a,int pos){
    if(h <= 0 || a <= 0)
        return 0;
    
    if(dp[h][a][pos] != -1)
        return dp[h][a][pos];
    
    int ans =0;
    
    if(pos != 1)
        ans = max(ans,back(h+3,a+2,1));
    
     if (pos != 2)
        ans = max(ans,back(h-5,a-10,2));             
    
     if(pos != 2)
        ans = max(ans,back(h-20,a+5 ,3));                      
         
  // my unit
    ans++;
    return dp[h][a][pos] = ans;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#endif
        int t;sc(t);
        int h,a;
        while(t--){
            CLR(dp,-1);
            sc(h);sc(a);
            int ans=0;
            ans = max(ans,back(h,a,1)-1);
            ans = max(ans,back(h,a,2)-1);
            ans = max(ans,back(h,a,2)-1);
           printf("%d\n",ans); 
        }

return 0; 
}
