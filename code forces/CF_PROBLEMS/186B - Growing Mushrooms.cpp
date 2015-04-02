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

#define SC(x) scanf("%d",&x)
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

bool comp(pair<double , int> a, pair<double , int> b){
  if(a.first == b.first)
    return a.second < b.second;
  return a.first > b.first;
}

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
#endif
DSC2(n,t1); DSC2(t2,k);
vector<pair<double , int> >arr;
int x , y;
REP(i,n){
  SC(x);SC(y);
  double s = double(x*t1*(100-k))/100.0 + y*t2 ;
  s = max(s , double(y*t1*(100-k))/100.0 + x*t2);
  // printf("%f\n", s);
  s = ceil(s*100)/100;
  arr.push_back(MP(s,i+1));  
}
sort(ALL(arr) ,comp);

REP(i,n){
  printf("%d %.2f\n",arr[i].second , arr[i].first );
}
return 0; 
}
