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
       cout<<arr[i] <<endl;
     else
      cout<<arr[i]<<" ";
}

int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }

const int MAX = 1003;
double dp[MAX][MAX];
const int R = 0, W = 1, BR = 2, BW = 3;
LL power (int b, int p){
  LL ans = 1;
  REP(i,p){
    ans *= b;
  }
  return ans;
}

vi pset; // remember: vi is vector<int>
void initSet(int N) { pset.assign(N, 0);
for (int i = 0; i < N; i++) pset[i] = i; }
int findSet(int i) { return (pset[i] == i) ? i : (findSet(pset[i])); }
bool isSameSet(int i, int j) { return findSet(i) == findSet(j); }
void unionSet(int i, int j) { pset[findSet(i)] = findSet(j); }


int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
#endif
DSC(ts);
REP(t,ts){
  printf("Case #%d:\n",t+1);
  DSC2(n,k);
  initSet(n);
  REP(i,n){
    DSC(x);
    if(x == 0 )
      pset[i] = i;
    else
      pset[i] = x-1;
  }
  int a,b; char c;
  REP(i,k){
    cin>>c;
    if(c == 'C'){
      cin>>a;
      pset[a-1] = a-1;
    }
    else{
      cin>>a>>b;
      if(isSameSet(a-1,b-1))
        printf("YES\n");
      else
        printf("NO\n");
    }
  // print_v(pset);
  }
}
return 0; 
}
