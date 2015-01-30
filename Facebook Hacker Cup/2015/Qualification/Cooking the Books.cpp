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

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  int t; sc(t);
  REP(ts,t){
    string s; cin>>s;
    string sml = s, lrg =s;
// for bigger
    REP(k , SZ(s)){
      bool f =false;
      int b = k;
      for(int i  =SZ(s)-1 ; i>=k ; i-- ){
        if(s[i] > s[b]){
          f = true;
          b = i;
        }
      }
      if(f){
        swap(lrg[k],lrg[b]);
        break;
      }
    }

// for smallest 
    REP(k , SZ(s)){
      bool f =false;
      int b = k;
      for(int i  =SZ(s)-1 ; i>=k ; i-- ){
        if(s[i] < s[b] && s[i] !='0'){
          f = true;
          b = i;
        }
      }
      if(f){
        swap(sml[k],sml[b]);
        break;
      }
    }
    printf("Case #%d: %s %s\n",ts+1 , sml.c_str() , lrg.c_str() );
  }
return 0; 
}
