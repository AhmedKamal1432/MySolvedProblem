/*
*
* solved by Ahmed Kamal
*/
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <iostream>
#include <sstream>
#include <cstring>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <bitset>
#include <queue>
#include <stack>
#include <utility>
#include <algorithm>
#include <functional>

using namespace std;

typedef long long int LL ;
#define vi vector<int>
#define ii pair<int,int>
#define vii vector< pair<int,int> >

#define ALL(v)              ((v).begin()), ((v).end())
#define SZ(v)               ((int)((v).size()))
#define CLR(v, d)           memset(v, d, sizeof(v))
#define REP(i, n)       for(int i=0;i<(int)(n);++i)
#define LOOP(i,b, n)        for(int i=(b);i<(int)(n);++i)

#define SC(x) scanf("%d",&x)
#define DSC(x) int x; scanf("%d",&x)
#define DSC2(x,y) int x,y; scanf("%d %d",&x,&y)

#define PB  push_back
#define MP  make_pair
double const EPS = 2.22045e-016;
#define INF (1<<29)


typedef vector<double>    VD;
typedef vector<string>    VS;
void print_v(vi arr){
int n = SZ(arr);
  REP(i,n)
    if(i == n-1)
       printf("%d\n",arr[i] );
     else
      printf("%d ", arr[i]);
}

int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }

LL dp[105];
VS arr;
int n,m;
int MOD = 1000000007;
int chars = 26;
LL back(int idx){
    if(idx == -1){
        // printf("\n");
        return 1;
    }
    if(dp[idx] != -1)
        return dp[idx];
    LL ans = 0;
    REP(c,chars){
        REP(i,n){
            if(arr[i][idx] - 'A' == c){
                // printf("%c", c+'A');
                ans+=back(idx-1)%MOD;
                break;
            }
        }
    }
    return dp[idx] = ans;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#endif

SC(n);SC(m);
arr.assign(n,"");
CLR(dp,-1);
REP(i,n){
    cin>>arr[i];
}
printf("%d\n",(int)(back(m-1)%MOD) );
return 0;
}
