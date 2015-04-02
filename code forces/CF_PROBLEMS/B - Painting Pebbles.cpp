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
#define sc(x) scanf("%d",&x)
double const EPS = 2.22045e-016;
#define INF (1<<29)

#define ALL(v)        ((v).begin()), ((v).end())
#define SZ(v)       ((int)((v).size()))
#define CLR(v, d)     memset(v, d, sizeof(v))
#define REP(i, n)   for(int i=0;i<(int)(n);++i)
#define LOOP(i,b, n)    for(int i=(b);i<(int)(n);++i)

#define PB  push_back
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
int n,k; sc(n);sc(k);
vi arr(n,0);
REP(i,n){
  sc(arr[i]);
}
vi sarr (arr);
sort(ALL(sarr));
int m = 0;
int acc = 0;
vi color(k,0);
bool g = true;
int sm = sarr[0]+1;
if(sarr[n-1] - sm <= k-1 ){
  printf("YES\n");
  REP(i,n){
    int m = 1;
    REP(j,arr[i]){
      if( j == arr[i]-1)
        printf("%d\n",m );
      else
        printf("%d ",m );
      if( j >= sm-1 )
        m++;
    }
  }
}
else
  printf("NO\n");
return 0; 
}
