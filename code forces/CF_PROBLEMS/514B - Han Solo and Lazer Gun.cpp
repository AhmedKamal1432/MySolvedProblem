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
double const EPS = 2.22045e-010;
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
double n , x,y;
cin>>n>>x>>y;
vector<double> arr;
double a,b;
vi inf(n,0);
REP(i,n){
  cin>>a>>b;
  if(abs(a-x) < EPS){
    arr.push_back( INF );
    inf[i] = 1;  
  }
  else 
    arr.push_back( (b-y) / (a-x) );
}
int ans = 0;
REP(i,n){
  bool g = true;
  LOOP(j,i+1,n){
    if(inf[i] == 1 && inf [j] == 1)
        g= false;
    else if(abs(arr[i] - arr[j]) < EPS)
      g = false;
  }
  if(g)
    ans++;
}
printf("%d\n",ans );
return 0; 
}
