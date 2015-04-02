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
DSC(n);
vi arr(n,0),first(n-1,0),second(n-2,0);
REP(i,n)
  sc(arr[i]);

REP(i,n-1)
  sc(first[i]);
REP(i,n-1)
  sc(second[i]);
sort(ALL(arr));sort(ALL(first));sort(ALL(second));
int f,s;
REP(i,n){
  int k = upper_bound(ALL(arr),arr[i]) - lower_bound(ALL(arr),arr[i]);
  if(upper_bound(ALL(second),arr[i]) - lower_bound(ALL(second),arr[i]) < k){
    // printf("i = %din = %d\n",i,arr[i]);
    if( upper_bound(ALL(first),arr[i]) - lower_bound(ALL(first),arr[i]) == k-1)
      f = arr[i];
    else
      s = arr[i];
    if(upper_bound(ALL(second),arr[i]) - lower_bound(ALL(second),arr[i]) == k-2)
      s = arr[i]; 
  }
}
printf("%d\n%d\n",f,s);
return 0; 
}
