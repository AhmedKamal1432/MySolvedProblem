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
#define LOOP(i,b,n)   for(int i=(b);i<(int)(n);++i)

#define PB  push_back
typedef vector<double>    VD;
typedef vector<string>    VS;
int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }

int ans = INF,n;
int mn = INF;
vi arr;
int back(int i ,int sum, int mask){
  if(sum < 0)
    return  -INF;
  if(i >= n){
    if( sum < mn ){
       ans = mask;
       mn = sum;
     }
    return 0;
  }
  back(i+1,sum - arr[i] , mask | (1<<i));
  back(i+1,sum,mask);
  return 0;
}
int main()
{
  #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      //freopen("output.txt", "w", stdout);
  #endif
int cd; 
while(cin>>cd >>n){
  ans = INF;
  mn = INF;
  // printf("%d\n",n );
  arr.assign(n,0);
  REP(i,n)
   sc(arr[i]);
   back(0,cd,0);
   int sum =0;
   REP(i,n){
    if(ans & (1<<i)){
      printf("%d ",arr[i] );
      sum+=arr[i];
    }
   }
    printf("sum:%d\n", sum);
}

return 0; 
}
