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
int n,m; 
sc(n);sc(m);
if(n > m+1 || m > n*2+2 ){
  printf("-1\n");
  return 0;
}

vi arr;
if(n == 0){
  REP(i,m)
    printf("1");
  printf("\n");
  return 0;
}
  arr.assign(n,0);
  int i = 0;
  bool base = false;
  if(m-2 > n-1){
    m-=2; 
    base = true;
  }
  while(m){
     // printf("m = %d  i = %d\n", m,i);
    if(i==SZ(arr)){
      i=0;
    }
    arr[i]++;
    i++;
    m--;
}
// print_v(arr);
REP(i,SZ(arr)){
  if(i == 0&& base)
    printf("11");
  printf("0");
  REP(j,arr[i])
    printf("1");
}
printf("\n");
return 0; 
}
