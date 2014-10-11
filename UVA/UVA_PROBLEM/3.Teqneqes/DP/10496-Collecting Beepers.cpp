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

struct point{
    int x,y;
    point(int a,int b){
        x = a; y=b;
    }
    point(){}
};

int mx,my;
point start;
int dp[(1<<10)+5][15];
int n;
point arr[15];

int calc(point p1 , point p2){
    int sum =abs(p1.x - p2.x) + abs(p1.y - p2.y);
    return sum;
}
int back(int mask,int last){
    if(mask == (1<<n)-1 ){
        return calc(arr[last],start);
    }
    if(last != -1 && dp[mask][last] != -1)
        return dp[mask][last];
    
    int res =1<<29;
    REP(i,n){
        if(!(mask & 1<<i)){
            point lp;
            if(last == -1)
                lp=start;
            else
                lp = arr[last];
            int s = calc(arr[i],lp);
               res = min(res, s + back(mask | (1<<i) ,i)); 
        }
    }
    return dp[mask][last] = res;
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
            sc(mx);sc(my);
            int x,y;
            sc(x);sc(y);
            start.x = x; start.y = y;
            sc(n);
            REP(i,n){
                sc(arr[i].x);sc(arr[i].y);
            }
        printf("The shortest path has length %d\n",back(0,-1));
        }
return 0; 
}
