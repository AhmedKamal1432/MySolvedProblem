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

int rev (int x){
  int r,rev=0;
  while(x>0)
  {
    r=x%10;
    x=x/10;
    rev=rev*10+r;
  }
//   printf("x =%d rev = %d\n",x,rev );
  return rev;
}

bool visit[100006];
int target;
int back(int x){
  int ans = 0;
  queue<pair<int,int> > q;
  q.push(ii(x,0));
  while(!q.empty()){
    
    ii node = q.front();
    visit[node.first] = true;
    // printf("x = %d\n",node.first );
    int a = node.first +1, b = rev(node.first);
    
    if(a == target || b == target )
      return node.second +1;

    if(! visit[a])
      q.push(ii(a,node.second +1));
    if(! visit[b])
      q.push(ii(b,node.second +1));
    q.pop();
  }
  return -1;
} 
int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
#endif
int n; sc(n);
while(n--){
  CLR(visit , false);
  int x ; sc(x); sc(target);
  printf("%d\n",back(x) );
}
return 0; 
}
