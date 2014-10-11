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

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
#endif
int n,m,k;
 sc(n);sc(m);sc(k);
 vi arr(m+1,0);
 REP(i,m+1){
  sc(arr[i]);
 }
 int pv= arr[m];
 int ans =0;
 REP(i,m){
   int dif=0;
   REP(j,n){
     dif+= (arr[i] & (1<<j) ) ^ (pv & (1<<j) )? 1: 0;
   }
   //printf("n1 ,%d, n2 %d  diff = %d\n",arr[i],pv,dif);
  if(dif <= k)
    ans++;
 }
 printf("%d\n",ans);
return 0; 
}
