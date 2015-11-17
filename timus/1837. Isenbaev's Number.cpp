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

void print_v(VS arr){
int n = SZ(arr);
  REP(i,n)
    if(i == n-1)
       cout<<arr[i] <<endl;
     else
      cout<<arr[i]<<" ";
}

int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }

LL power(int b, int p){
  LL ans = 1;
  REP(i,p){
    ans *= b;
  }
  return ans;
}

vector<VS> gr(301,VS());
map<string, int > s_in,mp;
void print_gr(){
  for (map<string, int>::iterator it = s_in.begin(); it != s_in.end(); ++it){
    cout<< it->second <<" " << it->first <<endl ;
    print_v(gr[it->second]);
    printf("\n");
  }
  printf("/////////////////////////\n");
}

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
#endif
  DSC(n);
  VS a(3,"");
  int cnt = 1;
  REP(i,n){
    REP(i,3){
      cin>>a[i];
      if(s_in.find(a[i]) == s_in.end()){
        if(a[i] == "Isenbaev"){
          s_in[a[i]] = 0;
          mp[a[i]] = 0;
        }
        else{
          s_in[a[i]] = cnt++;
          mp[a[i]] = -1;
        }
      }
    }
    gr[ s_in[a[0] ] ].push_back(a[1]); gr[ s_in[a[0] ] ].push_back(a[2]); 
    gr[ s_in[a[1] ] ].push_back(a[0]); gr[ s_in[a[1] ] ].push_back(a[2]); 
    gr[ s_in[a[2] ] ].push_back(a[0]); gr[ s_in[a[2] ] ].push_back(a[1]); 
  }

// print_gr();

  // BFS
  queue<ii> qu;
  qu.push(ii(0,0));
  vi visit(305, 0);
  while(!qu.empty()){
      ii p = qu.front();
      qu.pop();
      if(visit[p.first] )
        continue;
      visit[p.first] = true;
      REP(i,SZ(gr[p.first]) ){
        if( mp[ gr[ p.first ][i] ] == -1)
          mp[gr[ p.first ][i]] = p.second+1;
        qu.push( MP( s_in[ gr[ p.first ][i] ], p.second+1) );
    }
  }
  for (map<string, int>::iterator it = mp.begin(); it != mp.end(); ++it){
    if(it -> second == -1)
      printf("%s undefined\n", it->first.c_str());
    else
      printf("%s %d\n", it->first.c_str(), it->second);
  }
  return 0; 
}
