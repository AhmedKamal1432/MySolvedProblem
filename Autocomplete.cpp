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

struct node{
  char c;
  vector<node *> list;
  node(char _c){
    c = _c;
    list.assign(27,NULL);
  }
  node(){}
  node * is_found(char ch){
      return list[ch-'a'];
  }
  void set_in(char ch){
    node * ptr = new node(ch);
    list[ch- 'a'] =ptr;
  }

};

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
#endif
int t ;sc(t);
REP(ts,t){
  int n;sc(n);
  LL ans = 0;
  string s;
  node * arr = new node('$');
  REP(i,n){
    cin>>s;
    int sz= SZ(s);
    bool finish = false; 
    node * ptr = arr;
    REP(i,sz){
      if(! finish)
        ans++;
      if( ptr->is_found(s[i]) ==(node *) NULL){
        ptr->set_in(s[i]);
        finish = true;
      }
      ptr = ptr->is_found(s[i]);
    }    
  }
  printf("Case #%d: ",ts+1);
  cout<<ans<<endl;
}
return 0; 
}
