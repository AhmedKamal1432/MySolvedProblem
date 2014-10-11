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

int n;
int dp[10004];
vi arr;
int back(int pos){
    if(pos == n)
        return 0;
    int &ans =dp[pos];
    if(ans != -1)
        return ans;
    ans = max(0,arr[pos]+back(pos+1));
    return ans;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#endif

        while(sc(n)!=EOF && n!= 0){
            arr.assign(n,0);
            REP(i,n)
            sc(arr[i]);
            CLR(dp,-1);
            int ans = 0;
            REP(i,n)
             ans =max(ans,back(i)); 
            if(ans > 0)
               printf("The maximum winning streak is %d.\n",ans);
            else
                printf("Losing streak.\n");
            
        }
return 0; 
}
