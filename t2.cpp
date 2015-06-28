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
string a,b,c;
cin>>a>>b>>c;
vi a_h(30,0),b_h(30,0),c_h(30,0);
REP(i,SZ(a))
  a_h[a[i]-'a']++;
REP(i,SZ(b))
  b_h[b[i]-'a']++;
REP(i,SZ(c))
  c_h[c[i]-'a']++;
int const MAX = 100005;

int ans1,ans2 =  0;
REP(t,MAX){
  // take from b t

  vi a_temp(a_h);
  bool g = true;
  REP(i,30){
    if(b_h[i] * t > a_temp[i]){
    // printf("b exceed at t = %d\n",t );
      g = false;
      break;
    }
    a_temp[i] -= b_h[i] * t;  
  }
  if(!g)
    break;
  g = true;
  int mn = MAX;
  
  REP(i,30){
    if(c_h[i]  > a_temp[i]){
      g = false;
      break;
    }
    if(c_h[i] != 0)
      mn = min(mn,a_temp[i]/c_h[i]);
  }
  if(mn == MAX || !g)
    mn = 0;
  // printf("t = %d mn = %d ans1 = %d  ans2 = %d\n", t,mn,ans1,ans2);
  if( ans2 + ans1 < t+mn ){
    // printf("maxi %d %d\n", ans1 , ans2);
    ans1 = t;
    ans2 = mn;
  }
  
}

REP(i,30){
  a_h[i] -= (b_h[i] * ans1  +  c_h[i] * ans2);
}

// printf("%d %d\n", ans1 , ans2);
REP(i,ans1)
  cout<<b;
REP(i,ans2)
  cout<<c;

REP(i,30){
  REP(k,a_h[i])
    printf("%c",i+'a' );
}

printf("\n");
return 0; 
}
