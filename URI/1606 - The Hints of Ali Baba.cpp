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
int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }

bool visit [100005];
int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
#endif
  int k,n;
  while(cin>>k>>n){
    int x;
    CLR(visit , false);
    vi arr;
    REP(i,k){
      sc(x);
      if(!visit[x]){
        visit[x]=true;
        arr.push_back(x);
      }
    }
    REP(i,SZ(arr)){
      if(i == SZ(arr) -1 )
        printf("%d\n",arr[i] );
      else
        printf("%d ",arr[i] );
    }
  }
return 0; 
}
