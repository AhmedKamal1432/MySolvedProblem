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

int MAX = 1000006;
const int R = 0, W = 1, BR = 2, BW = 3;
LL power (int b, int p){
  LL ans = 1;
  REP(i,p){
    ans *= b;
  }
  return ans;
}

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
#endif
DSC(ts);
REP(t,ts){
  DSC(n);
  vi arr (MAX,0);
  vi interval_begin (MAX,0);
  int a,b,c;
  int single_one = 10000007;
  int _5azo2 = -898;
  REP(i,n){
    cin>>a>>b>>c;
      (arr[b] != single_one &&arr[b] != _5azo2) ? arr[b] += 1 : single_one;
      (arr[c] != single_one &&arr[c] != _5azo2) ? arr[c] = -1 : single_one;
    if(a == c &&arr[a] != _5azo2)
      arr[a] = -2;
    else if(arr[a] != _5azo2)
      arr[a] = single_one;
    if(b == c && arr[b] != _5azo2)
      arr[b] = single_one;
    if(a == b && b == c)
      arr[b]= _5azo2;
    interval_begin[a] = b;
  }

  int ans = 0;
  int p =0;
  int found_single = false;
  int first_one = -1;
  
  // print_v(arr);

  REP(i,MAX){
    if(arr[i] == single_one){
      if(p == 1 && interval_begin[i] == first_one){ // my interval
        ans+=2;
      }
      else
        ans+=1;
      p=0;
    }
    else if(arr[i] == 1){
      p++;
      if(p == 1){
        first_one = i;
        found_single = false;
      }
    }
    else if (arr[i] == -1){
      if(p > 0)
        ans++;
      p=0;
    }
    else if (arr[i] == -2){ // end on single_one
      p = 0;
      ans++;
    }
    else if(arr[i] == _5azo2){
      ans+=2;
      p = 0;
    }
    // printf("%d %d\n",i,ans );
  }
  printf("Case #%d: %d\n",t+1,ans );

}
return 0; 
}
