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
#define MP  make_pair

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
pair<string , int> dmax[1003][102];
pair<string , int> dmin[1003][102];
int n,s;
pair<string, int> back(int sum,int idx){
  if(idx == n ){
    if(sum == s)
      return MP("",1);
    return MP("",0);
  }
  if(dmax[sum][idx] != MP(string(""),-1))
    return dmax[sum][idx];
  pair<string , int> ans = MP("",0);
  REP(i,10){
    if(i==0 && idx == 0)
      continue;

    pair<string , int> t = back(sum+i,idx+1);
    string s = t.first;
    string it = "";
    it.PB(i+'0');
    if(t.second == 1){
      ans = max(ans,MP(it+s,1));
    }
  }
  return   dmax[sum][idx] = ans;
}

pair<string, int> back_min(int sum,int idx){
  if(idx == n ){
    if(sum == s)
      return MP("",1);
    return MP("",0);
  }
  if(dmin[sum][idx] != MP(string(""),-1))
    return dmin[sum][idx];
  pair<string , int> ans = MP("a",0);
  REP(i,10){
    if(i==0 && idx == 0){
      continue;
    }
    pair<string , int> t = back_min(sum+i,idx+1);
    string s = t.first;
    string it = "";
    it.PB(i+'0');
    if(t.second == 1){
      ans = min(ans,MP(it+s,1));
    }
  }
  return   dmin[sum][idx] = ans;
}
int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
#endif
sc(n);sc(s);
REP(i,1003)
  REP(j,102){
    dmax[i][j] = MP("",-1);
    dmin[i][j] = MP("",-1);
  }
pair<string, int> mx  = back(0,0);
if(n == 1 && s == 0)
  mx.first="0";  
else if(mx.first.size() == 0)
  mx.first="-1";

pair<string, int> mn  = back_min(0,0);

if(n == 1 && s == 0)
  mn.first="0";  
if(mn.first == "a")
  mn.first = "-1";
printf("%s %s\n",mn.first.c_str(), mx.first.c_str() );
return 0;
}
