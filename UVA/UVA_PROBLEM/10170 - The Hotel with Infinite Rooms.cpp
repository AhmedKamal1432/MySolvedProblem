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

LL s,d;
LL cnt(LL mid){
    LL n = mid+s-1;
    LL ans = n*(n+1)/2 - s*(s-1)/2;
    return ans;     
}
LL MAX = (LL)1 << 28;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#endif

while(cin>>s>>d){
    LL b = 0,e = MAX;
    // printf("%lld\n",MAX );
    while(b < e){
        LL mid  = (b+e)/2;
        // printf("at mid  = %lld, cnt = %lld\n",mid,cnt(mid) );
        if(cnt(mid) >= d){
            e = mid;
        }
        else
            b = mid+1;
    }
    printf("%lld\n",b+s-1 );
}
return 0; 
}
