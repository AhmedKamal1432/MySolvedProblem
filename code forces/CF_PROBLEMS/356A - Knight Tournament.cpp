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
int n,m;sc(n);sc(m);
vi win(m+1,0);
vector<vi> begin(n+1,vi());
vector<vi> finish(n+1,vi());
priority_queue< int, vector<int>, greater<int> > pq;
vi ans (n,0);
vi still(n+1,1);
REP(i,m){
  int l,r,x; sc(l);sc(r);sc(x);
  begin[l-1].push_back(i+1);
  finish[r].push_back(i+1);
  win[i+1] = x;
}
REP(i,n){
//  printf("in\n");
  // add to piroirty;
  REP(k,SZ(begin[i]))
    pq.push(begin[i][k]);

  // add to finish
  REP(k , SZ(finish[i])){
    still[finish[i][k]] = 0;
  }
  // 4el mn el prioirty
  while(!pq.empty() &&!still[pq.top()]){
    pq.pop();
  }
//printf("pq.top()%d \n", pq.top());
  if(pq.empty())
    ans[i] = 0;
  else if (win[pq.top()] != i+1)
    ans[i] =win[pq.top()];
  else {
    vector<int> tmp;
    while(!pq.empty() && (win[pq.top()] == i+1 || !still[pq.top()])){
      if(still[pq.top()])
        tmp.push_back(pq.top());
      pq.pop();
    }
    if(pq.empty())
      ans[i]=0;
    else
      ans[i]=win[pq.top()];
    REP(i,SZ(tmp))
        pq.push(tmp[i]);
  }
}
 // return 0;
print_v(ans);

return 0;
}
