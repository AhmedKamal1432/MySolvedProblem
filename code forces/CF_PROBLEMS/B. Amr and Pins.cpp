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
int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }


int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
#endif
LL r;
LL a,b,x,y;
cin>>r>>a>>b>>x>>y;
LL ds = (x-a)*(x-a) + (y-b)*(y-b);
LL ans;
bool calc = false;
if(a == x && b == y){
  ans = 0;
  calc = true;
}
else if(abs((int) sqrt(ds) - (double) sqrt(ds)) < EPS){
  LL d = sqrt(ds);
  if(d%(r*2) == 0){
    ans = d/(r*2);
    calc = true;
  }  
}

if(!calc){
  double d = sqrt(ds);
  // printf("ds = %f\n",d);
  ans =  ceil(d/(r*2));
}
cout << ans<<endl;
return 0; 
}
