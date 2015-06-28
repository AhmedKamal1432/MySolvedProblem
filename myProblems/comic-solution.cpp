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
DSC2(x,y);
queue<int> qu;
qu.push(x);
int ans = 0;
int MAX = 1000006;
vi visit(MAX,0);
visit[x] = 1;
while(!qu.empty()){
  queue<int> temp;
  bool g = false;
  while(!qu.empty()){
    int q = qu.front();
    if(q == y){
      g = true;
      break;
    }
    qu.pop();
    if(q*2 < MAX && visit[q*2] == 0){
      temp.push(q*2);
      visit[q*2] = 1;
    }
    if(LL(q) * LL(q) < MAX && visit[q*q] == 0){
      temp.push(q*q);
      visit[q*q] = 1;
    }
    if(q > 1 && visit[q-1] == 0){
      temp.push(q-1);
      visit[q-1] = 1;
    }
  }
  if(g)
    break;
  ans++;
  qu =temp;
}
printf("%d\n",ans);
return 0; 
}
