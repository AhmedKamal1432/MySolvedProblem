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

int dp[100][100];
int n;
vi arr;
int back(int indx,int last){
    if(indx == n)
        return 0;
    
    if(last!=-1 && dp[indx][last] != -1)
        return dp[indx][last];
    
    int ans =0;
    ans = back(indx+1,last);    
    if(last == -1 || arr[indx] > arr[last])
        ans = max(ans,1+back(indx+1,indx));

    return dp[indx][last] = ans;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#endif
        CLR(dp,-1);
        sc(n);
        arr.assign(n,0);
        REP(i,n)
          sc(arr[i]);
        printf("%d\n",back(0,-1));
 
return 0; 
}
