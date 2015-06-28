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

#define ALL(v)        ((v).begin()), ((v).end())
#define SZ(v)       ((int)((v).size()))
#define CLR(v, d)     memset(v, d, sizeof(v))
#define REP(i, n)   for(int i=0;i<(int)(n);++i)
#define LOOP(i,b, n)    for(int i=(b);i<(int)(n);++i)

#define sc(x) scanf("%d",&x)
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


int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
#endif
DSC2(t,k);
const int MAX = 100006;
LL MOD=  1000000007;

int dinner[MAX];
dinner[0]=1;

LOOP(i,1,MAX){
  dinner[i] = dinner[i-1];
  if(i - k >= 0)
    dinner[i] += dinner[i-k]%MOD;
  dinner[i] %= MOD;
  // printf("%d ",dinner[i] );
}
// printf("\n");
int arr[MAX];
arr[0]=0;
LOOP(i,1,MAX){
  arr[i] = (arr[i-1] % MOD + dinner[i] %MOD)%MOD;
  // printf("%d ",arr[i] );
}
// printf("\n");
while(t--){
  DSC2(a,b);
  printf("%d\n",int((LL(arr[b]-arr[a-1])+MOD)%MOD) );
}
}
